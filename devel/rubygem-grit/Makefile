# Created by: Daniel Roethlisberger <daniel@roe.ch>
# $FreeBSD$

PORTNAME=	grit
PORTVERSION=	2.5.0
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Object-oriented ruby library to access git repositories

LICENSE=	MIT

RUN_DEPENDS=	rubygem-diff-lcs>=1.1:${PORTSDIR}/textproc/rubygem-diff-lcs \
		rubygem-mime-types1>=1.15:${PORTSDIR}/misc/rubygem-mime-types1 \
		rubygem-posix-spawn>=0.3.6:${PORTSDIR}/devel/rubygem-posix-spawn

NO_ARCH=	yes
USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
