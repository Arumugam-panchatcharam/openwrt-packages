#
# This software is licensed under the Public Domain.
#

include $(TOPDIR)/rules.mk

PKG_NAME:=helloworld
PKG_VERSION:=0.1
PKG_RELEASE:=1

PKG_MAINTAINER:=Arumugam Panchatcharm <arumugamece2013@gmail.com>
PKG_LICENSE:=GPL-3.0
PKG_LICENSE_FILES:=LICENSE

include $(INCLUDE_DIR)/package.mk

define Package/helloworld
	SECTION:=utils
	CATEGORY:=Utilities
	SUBMENU:=helloworld
	TITLE:=legacy HelloWorld program.
	# Select package by default
	#DEFAULT:=y
	URL:=https://github.com/Arumugam-panchatcharam
endef

define Package/helloworld/description
	The most simplistic C program ever written. An epileptic monkey on crack could write this code.
endef

define Package/helloworld/config
	source "$(SOURCE)/Config.in"
endef

ifeq ($(CONFIG_helloworld_ENABLE_FOO),y)
MAKE_FLAGS += -DFOO
endif

ifeq ($(CONFIG_helloworld_ENABLE_BAR),y)
MAKE_FLAGS += -DBAR
endif

define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) ./src/* $(PKG_BUILD_DIR)/
endef

define Build/Configure
# Nothing to do here for us.
# By default helloworld/src/Makefile will be used.
endef

define Build/Compile
	CFLAGS="$(TARGET_CFLAGS)" CPPFLAGS="$(TARGET_CPPFLAGS)" $(MAKE) -C $(PKG_BUILD_DIR) $(TARGET_CONFIGURE_OPTS)
endef

define Package/helloworld/install
	$(CP) ./files/* $(1)/
	$(INSTALL_DIR) $(1)/usr/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/helloworld $(1)/usr/bin/
endef

$(eval $(call BuildPackage,helloworld))
