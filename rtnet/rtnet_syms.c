/***
 * rtnet/rtnet_syms.c - export kernel symbols
 *
 * Copyright (C) 1999      Lineo, Inc
 *               1999,2002 David A. Schleef <ds@schleef.org>
 *               2002      Ulrich Marx <marx@kammer.uni-hannover.de>		 
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
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#include <linux/kernel.h>
#include <linux/module.h>

#include <rtnet.h>
#include <rtnet_internal.h>

EXPORT_SYMBOL(rt_inet_aton);


/****************************************************************************************
 * socket.c										*
 ****************************************************************************************/
EXPORT_SYMBOL(rt_socket_lookup);
EXPORT_SYMBOL(rt_socket_callback);
EXPORT_SYMBOL(rt_socket);
EXPORT_SYMBOL(rt_socket_accept);
EXPORT_SYMBOL(rt_socket_bind);
EXPORT_SYMBOL(rt_socket_close);
EXPORT_SYMBOL(rt_socket_connect);
EXPORT_SYMBOL(rt_socket_listen);
EXPORT_SYMBOL(rt_socket_send);
EXPORT_SYMBOL(rt_socket_recv);
EXPORT_SYMBOL(rt_socket_sendto);
EXPORT_SYMBOL(rt_socket_recvfrom);
EXPORT_SYMBOL(rt_socket_sendmsg);
EXPORT_SYMBOL(rt_socket_recvmsg);
EXPORT_SYMBOL(rt_socket_getsockname);

EXPORT_SYMBOL(rt_ssocket);
EXPORT_SYMBOL(rt_ssocket_bind);
EXPORT_SYMBOL(rt_ssocket_listen);
EXPORT_SYMBOL(rt_ssocket_connect);
EXPORT_SYMBOL(rt_ssocket_accept);
EXPORT_SYMBOL(rt_ssocket_close);
EXPORT_SYMBOL(rt_ssocket_writev);
EXPORT_SYMBOL(rt_ssocket_send);
EXPORT_SYMBOL(rt_ssocket_sendto);
EXPORT_SYMBOL(rt_ssocket_sendmsg);
EXPORT_SYMBOL(rt_ssocket_readv);
EXPORT_SYMBOL(rt_ssocket_recv);
EXPORT_SYMBOL(rt_ssocket_recvfrom);
EXPORT_SYMBOL(rt_ssocket_recvmsg);
EXPORT_SYMBOL(rt_ssocket_getsockname);
EXPORT_SYMBOL(rt_ssocket_callback);


EXPORT_SYMBOL(rtnetif_rx);
EXPORT_SYMBOL(rt_mark_stack_mgr);
EXPORT_SYMBOL(rtnetif_tx);
EXPORT_SYMBOL(rtnetif_err_rx);
EXPORT_SYMBOL(rtnetif_err_tx);

EXPORT_SYMBOL(rtdev_alloc_name);
EXPORT_SYMBOL(rtdev_alloc);
EXPORT_SYMBOL(rtdev_free);
EXPORT_SYMBOL(rtdev_get_by_name);
EXPORT_SYMBOL(rtdev_get_by_index);
EXPORT_SYMBOL(rtdev_get_by_dev);
EXPORT_SYMBOL(rtdev_get_by_hwaddr);
EXPORT_SYMBOL(rtdev_add_pack);
EXPORT_SYMBOL(rtdev_remove_pack);
EXPORT_SYMBOL(rtdev_xmit);
EXPORT_SYMBOL(rtdev_xmit_if);

EXPORT_SYMBOL(rt_stack_connect);
EXPORT_SYMBOL(rt_stack_disconnect);
EXPORT_SYMBOL(rt_rtdev_connect);
EXPORT_SYMBOL(rt_rtdev_disconnect);


/****************************************************************************************
 * rtnet_init.c										*
 ****************************************************************************************/
EXPORT_SYMBOL(rt_alloc_etherdev);
EXPORT_SYMBOL(rt_register_rtnetdev);
EXPORT_SYMBOL(rt_unregister_rtnetdev);
EXPORT_SYMBOL(STACK_manager);
EXPORT_SYMBOL(RTDEV_manager);


/****************************************************************************************
 * ethernet/eth.c									*
 ****************************************************************************************/
EXPORT_SYMBOL(rt_eth_header);
EXPORT_SYMBOL(rt_eth_type_trans);


/****************************************************************************************
 * ipv4         									*
 ****************************************************************************************/
EXPORT_SYMBOL(rt_ip_route_output);
EXPORT_SYMBOL(rt_ip_register_fallback);

/****************************************************************************************
 * ipv4/arp.c										*
 ****************************************************************************************/
EXPORT_SYMBOL(rt_arp_table_lookup);
EXPORT_SYMBOL(rt_rarp_table_lookup);
EXPORT_SYMBOL(rt_arp_solicit);

/****************************************************************************************
 * rtskb.c										*
 ****************************************************************************************/
EXPORT_SYMBOL(rtskb_dequeue);
EXPORT_SYMBOL(rtskb_queue_tail);
EXPORT_SYMBOL(rtskb_queue_head_init);
EXPORT_SYMBOL(rtskb_queue_empty);
EXPORT_SYMBOL(rtskb_queue_purge);

EXPORT_SYMBOL(rtskb_copy_and_csum_bits);
EXPORT_SYMBOL(rtskb_copy_and_csum_dev);

EXPORT_SYMBOL(rtskb_over_panic);
EXPORT_SYMBOL(rtskb_under_panic);
EXPORT_SYMBOL(alloc_rtskb);
EXPORT_SYMBOL(kfree_rtskb);

