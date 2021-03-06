# Created by: Kristaps Kulis <kristaps.kulis@gmail.com>
# $FreeBSD$

PORTNAME=	gunicorn
PORTVERSION=	19.4.1
CATEGORIES=	www python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	WSGI HTTP Server for UNIX

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>0:${PORTSDIR}/devel/py-pytest

OPTIONS_DEFINE=		PROCTITLE
OPTIONS_DEFAULT=	PROCTITLE
OPTIONS_GROUP=		WORKERS
OPTIONS_GROUP_WORKERS=	EVENTLET GAIOHTTP GEVENT TORNADO

EVENTLET_DESC=	Eventlet async worker
GAIOHTTP_DESC=	gaiohttp async worker (Requires Python 3.3+)
GEVENT_DESC=	Gevent async worker (Requires Python < 3.x)
PROCTITLE_DESC=	Custom process titles with setproctitle(3)
TORNADO_DESC=	Tornado async worker

EVENTLET_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}eventlet>=0.9.7:${PORTSDIR}/net/py-eventlet
GAIOHTTP_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}aiohttp>0:${PORTSDIR}/www/py-aiohttp
GEVENT_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}gevent>=0.12.2:${PORTSDIR}/devel/py-gevent
PROCTITLE_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}setproctitle>0:${PORTSDIR}/devel/py-setproctitle
TORNADO_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}tornado>=2.2:${PORTSDIR}/www/py-tornado

USES=			python
USE_GITHUB=		yes
USE_PYTHON=		autoplist concurrent distutils

GH_ACCOUNT=	benoitc

NO_ARCH=	yes

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 3300
TEST_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}mock>0:${PORTSDIR}/devel/py-mock
.endif

.if ${PYTHON_REL} > 3000 && ${PORT_OPTIONS:MGEVENT}
BROKEN=	GEVENT requires Python < 3.x but this port is building with Python ${PYTHON_VER}. \
	Disable the GEVENT option of change the version of Python to build with, using DEFAULT_VERSIONS
.endif

.if ${PYTHON_REL} < 3000

# compileall() fails on 2.x, but .py[co] files are still in --record output
post-patch:
	${RM} ${WRKSRC}/gunicorn/workers/_gaiohttp.py

.if ${PYTHON_REL} < 3300 && ${PORT_OPTIONS:MGAIOHTTP}
BROKEN=	GAIOHTTP requires Python 3.3+ but this port is building with Python ${PYTHON_VER}. \
	Disable the GAIOHTTP option or change the version of Python to build with, using DEFAULT_VERSIONS
.endif
.endif

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.post.mk>
