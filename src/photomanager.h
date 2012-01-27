/***************************************************************************
 *   Copyright (C) 2012 by vvs <vvs@vvs.com>                            *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA .        *
 ***************************************************************************/

#ifndef PHOTOMANAGER_H
#define PHOTOMANAGER_H


#include <KXmlGuiWindow>

class photomanagerView;
class QPrinter;
class KToggleAction;
class KUrl;

/**
 * This class serves as the main window for photomanager.  It handles the
 * menus, toolbars and status bars.
 *
 * @short Main window class
 * @author vvs <vvs@vvs.com>
 * @version 0.0
 */
class photomanager : public KXmlGuiWindow
{
    Q_OBJECT
public:
    /**
     * Default Constructor
     */
    photomanager();

    /**
     * Default Destructor
     */
    virtual ~photomanager();

};

#endif // _PHOTOMANAGER_H_
