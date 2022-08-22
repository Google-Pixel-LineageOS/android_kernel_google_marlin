/*
 * fusb302 usb phy driver for type-c and PD
 *
 * Copyright (C) 2015, 2016 Fairchild Semiconductor Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. Seee the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#ifdef FSC_HAVE_DP

#include "../../platform.h"
#include "interface_dp.h"

void informStatus(DisplayPortStatus_t stat) 
{
	/* TODO: 'system' should implement this */
	/* this function is called to inform the 'system' of the DP status of the port partner */
    DpPpStatus.word = stat.word;
}

void informConfigResult (FSC_BOOL success) 
{
	/* TODO: 'system' should implement this */
	/* this function is called when a config message is either ACKd or NAKd by the other side */
    if (success == TRUE) DpPpConfig.word = DpPpRequestedConfig.word;
}

void updateStatusData(void) 
{
	/* TODO: 'system' should implement this */
	/* this function is called to get an update of our status - to be sent to the port partner */
}

FSC_BOOL DpReconfigure(DisplayPortConfig_t config) 
{
    /* TODO: 'system' should implement this */
    /* called with a DisplayPort configuration to do! */
    /* return TRUE if/when successful, FALSE otherwise */
    DpConfig.word = config.word;
    /* must actually change configurations here before returning TRUE! */
    return TRUE;
}

#endif // FSC_HAVE_DP

