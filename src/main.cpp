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

#include "photomanager.h"
#include <KDE/KApplication>
#include <KDE/KAboutData>
#include <KDE/KCmdLineArgs>
#include <KDE/KLocale>

static const char description[] =
    I18N_NOOP("A KDE 4 Application");

static const char version[] = "0.0";

int main(int argc, char **argv)
{
    KAboutData about("photomanager", 0, ki18n("photomanager"), version, ki18n(description),
                     KAboutData::License_GPL, ki18n("(C) 2012 vvs"), KLocalizedString(), 0, "vvs@vvs.com");
    about.addAuthor( ki18n("vvs"), KLocalizedString(), "vvs@vvs.com" );
    KCmdLineArgs::init(argc, argv, &about);

    KCmdLineOptions options;
    options.add("+[URL]", ki18n( "Document to open" ));
    KCmdLineArgs::addCmdLineOptions(options);
    KApplication app;

    photomanager *widget = new photomanager;

    // see if we are starting with session management
    if (app.isSessionRestored())
    {
        RESTORE(photomanager);
    }
    else
    {
        // no session.. just start up normally
        KCmdLineArgs *args = KCmdLineArgs::parsedArgs();
        if (args->count() == 0)
        {
            //photomanager *widget = new photomanager;
            widget->show();
        }
        else
        {
            int i = 0;
            for (; i < args->count(); i++)
            {
                //photomanager *widget = new photomanager;
                widget->show();
            }
        }
        args->clear();
    }

    return app.exec();
}
