/****************************************************************************
 ** Copyright (C) 2009-2021 Arzel Jerome <myst6re@gmail.com>
 **
 ** This program is free software: you can redistribute it and/or modify
 ** it under the terms of the GNU General Public License as published by
 ** the Free Software Foundation, either version 3 of the License, or
 ** (at your option) any later version.
 **
 ** This program is distributed in the hope that it will be useful,
 ** but WITHOUT ANY WARRANTY; without even the implied warranty of
 ** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 ** GNU General Public License for more details.
 **
 ** You should have received a copy of the GNU General Public License
 ** along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ****************************************************************************/
#pragma once

#include "Arguments.h"

class ArgumentsImport : public CommonArguments
{
public:
	ArgumentsImport();
	QString textFormat() const;
	bool autosizeTextWindows() const;
	inline const QString &directory() const {
		return _directory;
	}
	QString targetFile() const;
private:
	void parse();
	QString _directory, _target_file;
};
