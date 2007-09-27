/* 
 * Copyright (C) 2007 Tommi Maekitalo
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

#include <tntdb/oracle/connectionmanager.h>
#include <tntdb/oracle/connection.h>
#include <tntdb/connection.h>
#include <cxxtools/log.h>

log_define("tntdb.oracle.connectionmanager")

namespace tntdb
{
  namespace oracle
  {
    tntdb::Connection ConnectionManager::connect(const std::string& url)
    {
      return tntdb::Connection(new Connection(url.c_str()));
    }
  }
}

TNTDB_CONNECTIONMANAGER_DEFINE(oracle);