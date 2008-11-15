/* 
 * Copyright (C) 2005 Tommi Maekitalo
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef TNTDB_MYSQL_IMPL_CURSOR_H
#define TNTDB_MYSQL_IMPL_CURSOR_H

#include <tntdb/iface/icursor.h>
#include <tntdb/mysql/bindvalues.h>
#include <cxxtools/smartptr.h>

namespace tntdb
{
  namespace mysql
  {
    class BoundRow;
    class Statement;

    class Cursor : public ICursor
    {
        cxxtools::SmartPtr<BoundRow> row;
        cxxtools::SmartPtr<Statement> mysqlStatement;
        MYSQL_STMT* stmt;

      public:
        Cursor(Statement* statement, unsigned fetchsize);
        ~Cursor();

        // method for ICursor
        Row fetch();
    };
  }
}

#endif // TNTDB_MYSQL_IMPL_CURSOR_H

