/*
* Copyright (C) 2019 ~ 2020 Deepin Technology Co., Ltd.
*
* Author:     wangmingliang <wangmingliang@uniontech.com>
* Maintainer: wangmingliang <wanmgmingliang@uniontech.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* any later version.
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "ut_image_viewer_proxy_test.h"

#define private public
#include "view/image_viewer_proxy.h"
#include "view/widget/image_viewer.h"
#undef private

#include "resources/themes/images.h"

namespace dman {

ut_image_viewer_proxy_test::ut_image_viewer_proxy_test()
{

}

TEST_F(ut_image_viewer_proxy_test, open)
{
//    QString filePath = kImageDeepinManual;
//    ImageViewer *iv = new ImageViewer;
//    ImageViewerProxy ip(iv);
//    ip.open(filePath);
//    DLabel label;
//    QPixmap pix(filePath);
//    label.setPixmap(pix);
//    label.setFixedSize(pix.size());
//    ASSERT_EQ(ip.viewer_->img_label_->width(), label.width());
}

TEST_F(ut_image_viewer_proxy_test, openHttpUrl)
{
    ImageViewer *iv = new ImageViewer;
    ImageViewerProxy ip(iv);
    ip.openHttpUrl("www.baidu.com");
}

}
