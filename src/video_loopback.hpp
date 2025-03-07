/*
 *    This file is part of MotionPlus.
 *
 *    MotionPlus is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    MotionPlus is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with MotionPlus.  If not, see <https://www.gnu.org/licenses/>.
 *
 *    Copyright 2020-2023 MotionMrDave@gmail.com
 */
#ifndef _INCLUDE_VIDEO_LOOPBACK_HPP_
#define _INCLUDE_VIDEO_LOOPBACK_HPP_

    int vlp_startpipe(const char *dev_name, int width, int height);
    int vlp_putpipe(int dev, unsigned char *image, int imgsize);
    void vlp_init(ctx_dev *cam);
#endif /* _INCLUDE_VIDEO_LOOPBACK_HPP_ */
