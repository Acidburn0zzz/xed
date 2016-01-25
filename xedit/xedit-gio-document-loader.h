/*
 * xedit-gio-document-loader.h
 * This file is part of xedit
 *
 * Copyright (C) 2005 - Paolo Maggi
 * Copyright (C) 2007 - Paolo Maggi, Steve Frécinaux
 * Copyright (C) 2008 - Jesse van den Kieboom
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, 
 * Boston, MA 02110-1301, USA.
 */
 
/*
 * Modified by the xedit Team, 2005-2008. See the AUTHORS file for a
 * list of people on the xedit Team.
 * See the ChangeLog files for a list of changes.
 *
 * $Id$
 */

#ifndef __XEDIT_GIO_DOCUMENT_LOADER_H__
#define __XEDIT_GIO_DOCUMENT_LOADER_H__

#include <xedit/xedit-document.h>
#include "xedit-document-loader.h"

G_BEGIN_DECLS

/*
 * Type checking and casting macros
 */
#define XEDIT_TYPE_GIO_DOCUMENT_LOADER              (xedit_gio_document_loader_get_type())
#define XEDIT_GIO_DOCUMENT_LOADER(obj)              (G_TYPE_CHECK_INSTANCE_CAST((obj), XEDIT_TYPE_GIO_DOCUMENT_LOADER, XeditGioDocumentLoader))
#define XEDIT_GIO_DOCUMENT_LOADER_CLASS(klass)      (G_TYPE_CHECK_CLASS_CAST((klass), XEDIT_TYPE_GIO_DOCUMENT_LOADER, XeditGioDocumentLoaderClass))
#define XEDIT_IS_GIO_DOCUMENT_LOADER(obj)           (G_TYPE_CHECK_INSTANCE_TYPE((obj), XEDIT_TYPE_GIO_DOCUMENT_LOADER))
#define XEDIT_IS_GIO_DOCUMENT_LOADER_CLASS(klass)   (G_TYPE_CHECK_CLASS_TYPE ((klass), XEDIT_TYPE_GIO_DOCUMENT_LOADER))
#define XEDIT_GIO_DOCUMENT_LOADER_GET_CLASS(obj)    (G_TYPE_INSTANCE_GET_CLASS((obj), XEDIT_TYPE_GIO_DOCUMENT_LOADER, XeditGioDocumentLoaderClass))

/* Private structure type */
typedef struct _XeditGioDocumentLoaderPrivate XeditGioDocumentLoaderPrivate;

/*
 * Main object structure
 */
typedef struct _XeditGioDocumentLoader XeditGioDocumentLoader;

struct _XeditGioDocumentLoader
{
	XeditDocumentLoader loader;

	/*< private > */
	XeditGioDocumentLoaderPrivate *priv;
};

/*
 * Class definition
 */
typedef XeditDocumentLoaderClass XeditGioDocumentLoaderClass;

/*
 * Public methods
 */
GType 		 	 xedit_gio_document_loader_get_type	(void) G_GNUC_CONST;

G_END_DECLS

#endif  /* __XEDIT_GIO_DOCUMENT_LOADER_H__  */
