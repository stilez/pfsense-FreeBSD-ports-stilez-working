# Created by: Antoine Brodin <antoine@FreeBSD.org>
# $FreeBSD$

PORTNAME=	libsmraw
DISTVERSION=	alpha-20151219
CATEGORIES=	devel
MASTER_SITES=	https://github.com/libyal/libsmraw/releases/download/${PORTVERSION:E}/ \
		LOCAL/antoine

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Library and tools to access the split RAW image format

LICENSE=	LGPL3

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-python --with-libintl-prefix=${LOCALBASE}
USES=		fuse gettext libtool pathfix pkgconfig python
USE_OPENSSL=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip
LIBS+=		-L${OPENSSLLIB}
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION:E}

PORTDOCS=	AUTHORS ChangeLog

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
