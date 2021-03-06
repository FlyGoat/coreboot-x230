#
# This file is part of the coreboot project.
#
# Copyright (C) 2012 Advanced Micro Devices, Inc.
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; version 2 of the License.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#

romstage-y += dimmSpd.c

ramstage-y += iommu.c
ramstage-y += northbridge.c

ifneq ($(CONFIG_AGESA_LEGACY_WRAPPER), y)
romstage-y += state_machine.c
ramstage-y += state_machine.c
endif
