/* * Z3D - A structured light 3D scanner
 * Copyright (C) 2013-2016 Nicolas Ulrich <nikolaseu@gmail.com>
 *
 * This file is part of Z3D.
 *
 * Z3D is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Z3D is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Z3D.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "zstructuredlight_fwd.h"
#include "zstructuredlight_global.h"

class QSettings;
class QWidget;

namespace Z3D
{

class Z3D_STRUCTUREDLIGHT_SHARED_EXPORT ZPatternProjectionProvider
{

public:
    static void loadPlugins();
    static void unloadPlugins();

    static ZPatternProjectionPtr get(QSettings *settings);

private:
    explicit ZPatternProjectionProvider();

    static std::map< QString, ZPatternProjectionPlugin *> m_plugins;
};

} // namespace Z3D
