/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __UAPI_PSAMPLE_H
#define __UAPI_PSAMPLE_H
enum {
  PSAMPLE_ATTR_IIFINDEX,
  PSAMPLE_ATTR_OIFINDEX,
  PSAMPLE_ATTR_ORIGSIZE,
  PSAMPLE_ATTR_SAMPLE_GROUP,
  PSAMPLE_ATTR_GROUP_SEQ,
  PSAMPLE_ATTR_SAMPLE_RATE,
  PSAMPLE_ATTR_DATA,
  PSAMPLE_ATTR_GROUP_REFCOUNT,
  __PSAMPLE_ATTR_MAX
};
enum psample_command {
  PSAMPLE_CMD_SAMPLE,
  PSAMPLE_CMD_GET_GROUP,
  PSAMPLE_CMD_NEW_GROUP,
  PSAMPLE_CMD_DEL_GROUP,
};
#define PSAMPLE_ATTR_MAX (__PSAMPLE_ATTR_MAX - 1)
#define PSAMPLE_NL_MCGRP_CONFIG_NAME "config"
#define PSAMPLE_NL_MCGRP_SAMPLE_NAME "packets"
#define PSAMPLE_GENL_NAME "psample"
#define PSAMPLE_GENL_VERSION 1
#endif
