
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2018 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/


#include "layBitmapsToImage.h"
#include "layBitmap.h"
#include "layDitherPattern.h"
#include "layLineStyles.h"
#include "tlUnitTest.h"

#include <QImage>
#include <QColor>
#include <QMutex>

std::string
to_string (const QImage &img, unsigned int mask)
{
  std::string s;
  for (unsigned int i = 0; i < 32; ++i) {
    const unsigned int *data = (const unsigned int *)img.scanLine (i);
    for (unsigned int j = 0; j < 32; ++j) {
      s += (data[j] & mask) ? "x" : ".";
    }
    s += "\n";
  }
  return s;
}

TEST(1) 
{
  lay::Bitmap b1 (32, 32, 1.0);
  lay::Bitmap b2 (32, 32, 1.0);
  lay::Bitmap b3 (32, 32, 1.0);
  lay::Bitmap b4 (32, 32, 1.0);
  lay::Bitmap b5 (32, 32, 1.0);
  lay::Bitmap b6 (32, 32, 1.0);
  lay::Bitmap b7 (32, 32, 1.0);
  lay::Bitmap b8 (32, 32, 1.0);

  std::vector<lay::Bitmap *> pbitmaps;
  pbitmaps.push_back (&b1);
  pbitmaps.push_back (&b2);
  pbitmaps.push_back (&b3);
  pbitmaps.push_back (&b4);
  pbitmaps.push_back (&b5);
  pbitmaps.push_back (&b6);
  pbitmaps.push_back (&b7);
  pbitmaps.push_back (&b8);

  b1.scanline (4)[0] |= 0xf0000000;
  b2.scanline (4)[0] |= 0x3c000000;
  b2.scanline (3)[0] |= 0x000000f0;
  b3.scanline (3)[0] |= 0x00000ff0;
  b4.scanline (5)[0] |= 0x00000ff0;
  b4.scanline (16)[0] |= 0x00400ff0;
  b5.scanline (6)[0] |= 0x10000000;
  b6.scanline (5)[0] |= 0x10000000;
  b6.scanline (6)[0] |= 0x20000000;
  b6.scanline (18)[0] |= 0x20400000;
  b7.scanline (22)[0] |= 0x00080000;
  b8.scanline (23)[0] |= 0x00040000;

  std::vector<lay::ViewOp> view_ops;
  view_ops.push_back (lay::ViewOp (0x800000, lay::ViewOp::Copy, 0, 0, 0, lay::ViewOp::Rect, 1));
  view_ops.push_back (lay::ViewOp (0xc00000, lay::ViewOp::Copy, 0, 0, 0, lay::ViewOp::Rect, 1));
  view_ops.push_back (lay::ViewOp (0xe00000, lay::ViewOp::Copy, 0, 0, 0, lay::ViewOp::Rect, 2));
  view_ops.push_back (lay::ViewOp (0xf00000, lay::ViewOp::Copy, 0, 0, 0, lay::ViewOp::Cross, 5));
  view_ops.push_back (lay::ViewOp (0x008000, lay::ViewOp::Copy, 0, 0, 0, lay::ViewOp::Rect, 1));
  view_ops.push_back (lay::ViewOp (0x00c000, lay::ViewOp::Or, 0, 0, 0, lay::ViewOp::Cross, 3));
  view_ops.push_back (lay::ViewOp (0x000080, lay::ViewOp::Copy, 0, 0, 0, lay::ViewOp::Rect, 1));
  view_ops.push_back (lay::ViewOp (0x0000c0, lay::ViewOp::Or, 0, 0, 0, lay::ViewOp::Rect, 3));

  QImage img (QSize (32, 32), QImage::Format_RGB32);
  img.fill (0);

  lay::DitherPattern dp;
  lay::LineStyles ls;

  QMutex m;
  lay::bitmaps_to_image (view_ops, pbitmaps, dp, ls, &img, 32, 32, 0, &m);

  EXPECT_EQ (to_string (img, 0x800000),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "....xxxxxxxx..........x.........\n"
    "....xxxxxxxx..........x.........\n"
    "..xxxxxxxxxxxx......xxxxx.......\n"
    "....xxxxxxxx..........x.........\n"
    "....xxxxxxxx..........x.........\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "....xxxxxxxx....................\n"
    "....xxxxxxxx....................\n"
    "..xxxxxxxxxxxx..................\n"
    "....xxxxxxxx..............xxxxxx\n"
    "....xxxxxxxxx...................\n"
    "....xxxxxxxxx...................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x400000),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "....xxxxxxxx..........x.........\n"
    "....xxxxxxxx..........x.........\n"
    "..xxxxxxxxxxxx......xxxxx.......\n"
    "....xxxxxxxx..........x.........\n"
    "....xxxxxxxx..........x.........\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "....xxxxxxxx....................\n"
    "....xxxxxxxx....................\n"
    "..xxxxxxxxxxxx..................\n"
    "....xxxxxxxx..............xxxx..\n"
    "....xxxxxxxxx...................\n"
    "....xxxxxxxxx...................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x200000),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "....xxxxxxxx..........x.........\n"
    "....xxxxxxxx..........x.........\n"
    "..xxxxxxxxxxxx......xxxxx.......\n"
    "....xxxxxxxx..........x.........\n"
    "....xxxxxxxx..........x.........\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "....xxxxxxxx....................\n"
    "....xxxxxxxx....................\n"
    "..xxxxxxxxxxxx..................\n"
    "....xxxxxxxx....................\n"
    "....xxxxxxxxx...................\n"
    "....xxxxxxxxx...................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x100000),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "....xxxxxxxx..........x.........\n"
    "....xxxxxxxx..........x.........\n"
    "..xxxxxxxxxxxx......xxxxx.......\n"
    "....xxxxxxxx..........x.........\n"
    "....xxxxxxxx..........x.........\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "....xxxxxxxx....................\n"
    "....xxxxxxxx....................\n"
    "..xxxxxxxxxxxx..................\n"
    "....xxxxxxxx....................\n"
    "....xxxxxxxx....................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x080000),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x040000),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x020000),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x010000),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x008000),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "......................x......x..\n"
    ".....................xxx....xxx.\n"
    "......................x......x..\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    ".............................x..\n"
    "............................xxx.\n"
    "...........................xxx..\n"
    "............................x...\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x004000),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "......................x......x..\n"
    ".....................xxx....xxx.\n"
    "......................x......x..\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    ".............................x..\n"
    "............................xxx.\n"
    "...........................xxx..\n"
    "............................x...\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x002000),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x001000),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x000800),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x000400),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x000200),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x000100),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x000080),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    ".................xxx............\n"
    ".................xxx............\n"
    ".................xxx............\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x000040),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    ".................xxx............\n"
    ".................xxx............\n"
    ".................xxx............\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x000020),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x000010),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x000008),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x000004),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x000002),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

  EXPECT_EQ (to_string (img, 0x000001),
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
    "................................\n"
  );

}

