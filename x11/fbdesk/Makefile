# Created by: Hendrik Scholz <hendrik@scholz.net>
# $FreeBSD$

PORTNAME=	fbdesk
PORTVERSION=	1.4.1
PORTREVISION=	6
CATEGORIES=	x11
MASTER_SITES=	http://fluxbox.sourceforge.net/download/ \
		GENTOO

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Fluxbox utility to create and manage icons on the desktop

LICENSE=	MIT

LIB_DEPENDS=	libpng.so:${PORTSDIR}/graphics/png \
		libImlib2.so:${PORTSDIR}/graphics/imlib2

USE_XORG=	xext xft xpm xrender
USES=		pkgconfig
GNU_CONFIGURE=	yes

PORTDOCS=	ChangeLog INSTALL README
PLIST_FILES=	bin/fbdesk

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
