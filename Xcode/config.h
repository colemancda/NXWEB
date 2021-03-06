/*
 * Copyright (c) 2011-2012 Yaroslav Stavnichiy <yarosla@gmail.com>
 *
 * This file is part of NXWEB.
 *
 * NXWEB is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation, either version 3
 * of the License, or (at your option) any later version.
 *
 * NXWEB is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with NXWEB. If not, see <http://www.gnu.org/licenses/>.
 */

#define PACKAGE_NAME "@CMAKE_PROJECT_NAME@"
#define PACKAGE_STRING "@PACKAGE_STRING@"
#define PACKAGE_VERSION "@PACKAGE_VERSION@"
#define VERSION "@PACKAGE_VERSION@"

#define NXWEB_SYSCONFDIR "@NXWEB_SYSCONFDIR@"
#define NXWEB_LIBDIR "@NXWEB_LIBDIR@"

/* Use register_printf_specifier() instead of register_printf_function() */
#define USE_REGISTER_PRINTF_SPECIFIER 1

/* Enable debug logging */
#define ENABLE_LOG_DEBUG

/* Use IMAGEMAGICK */
//#cmakedefine WITH_IMAGEMAGICK

/* Use Python */
//#cmakedefine WITH_PYTHON

/* Use GNUTLS */
#define WITH_SSL

/* Use zlib */
#define WITH_ZLIB
