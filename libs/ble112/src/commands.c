/*
 * BLELabs BLE112-Protostick Demo Application for Tutorial #3
 * Contact: support@blelabs.com
 * Author: PeterVanPansen
 * Date: 12.08.2013
 * License: Stays as is
 *
 */

//
// Bluegiga’s Bluetooth Smart Demo Application
// Contact: support@bluegiga.com.
//
// This is free software distributed under the terms of the MIT license reproduced below.
//
// Copyright (c) 2012, Bluegiga Technologies
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of this
// software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THIS CODE AND INFORMATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
// EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
//

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "cmd_def.h"
#include "config.h"
#include "utils.h"

void ble_default(const void*v) {
	printf("===================ble_default Not Defined======================\n");
}

void ble_evt_system_no_license_key(const void*nul) {
    printf("[<] ble_evt_system_no_license_key\n");
}

void ble_evt_attributes_status(const struct ble_msg_attributes_status_evt_t *msg) {
	printf("===================ble_evt_attributes_status Not Defined======================\n");

}

void ble_rsp_attclient_indicate_confirm(const struct ble_msg_attclient_indicate_confirm_rsp_t*msg) {
	printf("===================ble_rsp_attclient_indicate_confirm Not Defined======================\n");

}

void ble_rsp_test_debug(const struct ble_msg_test_debug_rsp_t*msg) {
	printf("===================ble_rsp_test_debug Not Defined======================\n");

}

void ble_rsp_hardware_set_txpower(const void *nul) {
	printf("===================ble_rsp_hardware_set_txpower Not Defined======================\n");

}

void ble_rsp_attclient_read_multiple(const struct ble_msg_attclient_read_multiple_rsp_t *msg) {
	printf("===================ble_rsp_attclient_read_multiple Not Defined======================\n");

}

void ble_evt_attclient_read_multiple_response(const struct ble_msg_attclient_read_multiple_response_evt_t *msg) {
	printf("===================ble_evt_attclient_read_multiple_response Not Defined======================\n");

}

void ble_rsp_attclient_prepare_write(const struct ble_msg_attclient_prepare_write_rsp_t *msg) {
	printf("===================ble_rsp_attclient_prepare_write Not Defined======================\n");

}

void ble_rsp_attclient_execute_write(const struct ble_msg_attclient_execute_write_rsp_t *msg) {
	printf("===================ble_rsp_attclient_execute_write Not Defined======================\n");

}

void ble_evt_attributes_user_read_request(const struct ble_msg_attributes_user_read_request_evt_t *msg) {
	printf("===================ble_evt_attributes_user_read_request Not Defined======================\n");

}

void ble_rsp_attributes_user_read_response(const void * nul) {
	printf("===================ble_rsp_attributes_user_read_response Not Defined======================\n");

}

void ble_rsp_attributes_user_write_response(const void * nul) {
	printf("===================ble_rsp_attributes_user_write_response Not Defined======================\n");

}

void ble_rsp_system_whitelist_clear(const void *nul) {
	printf("===================ble_rsp_system_whitelist_clear Not Defined======================\n");

}

void ble_rsp_attclient_write_command(const struct ble_msg_attclient_write_command_rsp_t *msg) {
	printf("===================ble_rsp_attclient_write_command Not Defined======================\n");

}

void ble_rsp_attclient_reserved(const void *nul) {
	printf("===================ble_rsp_attclient_reserved Not Defined======================\n");

}

void ble_rsp_attclient_read_long(const struct ble_msg_attclient_read_long_rsp_t *msg) {
	printf("===================ble_rsp_attclient_read_long Not Defined======================\n");

}

void ble_rsp_system_whitelist_append(const struct ble_msg_system_whitelist_append_rsp_t *msg) {
	printf("===================ble_rsp_system_whitelist_append Not Defined======================\n");

}

void ble_rsp_sm_set_parameters(const void *nul) {
	printf("===================ble_rsp_sm_set_parameters Not Defined======================\n");

}

void ble_rsp_sm_passkey_entry(const struct ble_msg_sm_passkey_entry_rsp_t *msg) {
	printf("===================ble_rsp_sm_passkey_entry Not Defined======================\n");

}

void ble_rsp_sm_get_bonds(const struct ble_msg_sm_get_bonds_rsp_t *msg) {
	printf("===================ble_rsp_sm_get_bonds Not Defined======================\n");

}

void ble_rsp_sm_set_oob_data(const void *nul) {
	printf("===================ble_rsp_sm_set_oob_data Not Defined======================\n");

}

void ble_rsp_sm_set_security_mode(const void *nul) {
	printf("===================ble_rsp_sm_set_security_mode Not Defined======================\n");

}

void ble_rsp_gap_set_filtering(const struct ble_msg_gap_set_filtering_rsp_t *msg) {
	printf("===================ble_rsp_gap_set_filtering Not Defined======================\n");

}

void ble_rsp_gap_set_adv_parameters(const struct ble_msg_gap_set_adv_parameters_rsp_t *msg) {
	printf("===================ble_rsp_gap_set_adv_parameters Not Defined======================\n");

}

void ble_rsp_hardware_io_port_write(const struct ble_msg_hardware_io_port_write_rsp_t *msg) {
	printf("===================ble_rsp_hardware_io_port_write Not Defined======================\n");

}

void ble_rsp_hardware_io_port_read(const struct ble_msg_hardware_io_port_read_rsp_t *msg) {
	printf("===================ble_rsp_hardware_io_port_read Not Defined======================\n");

}

void ble_rsp_hardware_timer_comparator(const struct ble_msg_hardware_timer_comparator_rsp_t *msg) {
	printf("===================ble_rsp_hardware_timer_comparator Not Defined======================\n");

}

void ble_rsp_hardware_spi_config(const struct ble_msg_hardware_spi_config_rsp_t *msg) {
	printf("===================ble_rsp_hardware_spi_config Not Defined======================\n");

}

void ble_rsp_hardware_spi_transfer(const struct ble_msg_hardware_spi_transfer_rsp_t *msg) {
	printf("===================ble_rsp_hardware_spi_transfer Not Defined======================\n");

}

void ble_rsp_hardware_i2c_read(const struct ble_msg_hardware_i2c_read_rsp_t *msg) {
	printf("===================ble_rsp_hardware_i2c_read Not Defined======================\n");

}

void ble_rsp_hardware_i2c_write(const struct ble_msg_hardware_i2c_write_rsp_t *msg) {
	printf("===================ble_rsp_hardware_i2c_write Not Defined======================\n");

}

void ble_rsp_test_get_channel_map(const struct ble_msg_test_get_channel_map_rsp_t *msg) {
	printf("===================ble_rsp_test_get_channel_map Not Defined======================\n");

}

void ble_evt_attributes_value(const struct ble_msg_attributes_value_evt_t *msg) {
	printf("===================ble_evt_attributes_value Not Defined======================\n");

}

void ble_evt_sm_bonding_fail(const struct ble_msg_sm_bonding_fail_evt_t *msg) {
	printf("===================ble_evt_sm_bonding_fail Not Defined======================\n");

}

void ble_evt_sm_passkey_display(const struct ble_msg_sm_passkey_display_evt_t *msg) {
	printf("===================ble_evt_sm_passkey_display Not Defined======================\n");

}

void ble_evt_sm_passkey_request(const struct ble_msg_sm_passkey_request_evt_t *msg) {
	printf("===================ble_evt_sm_passkey_request Not Defined======================\n");

}

void ble_evt_sm_bond_status(const struct ble_msg_sm_bond_status_evt_t *msg) {
	printf("===================ble_evt_sm_bond_status Not Defined======================\n");

}

void ble_rsp_gap_set_adv_data(const struct ble_msg_gap_set_adv_data_rsp_t *msg) {
	printf("===================ble_rsp_gap_set_adv_data Not Defined======================\n");

}

void ble_rsp_gap_set_scan_parameters(const struct ble_msg_gap_set_scan_parameters_rsp_t *msg) {
	printf("[<] ble_rsp_gap_set_scan_parameters result: %d\n", msg->result);
	if (msg->result != 0) {
		setFlag(app_state, APP_COMMAND_ERROR);
	}
	clearFlag(app_state, APP_COMMAND_PENDING);
}

void ble_rsp_gap_set_directed_connectable_mode(const struct ble_msg_gap_set_directed_connectable_mode_rsp_t *msg) {
	printf("===================ble_rsp_gap_set_directed_connectable_mode Not Defined======================\n");

}

void ble_rsp_hardware_io_port_config_direction(const struct ble_msg_hardware_io_port_config_direction_rsp_t *msg) {
	printf("===================ble_rsp_hardware_io_port_config_direction Not Defined======================\n");

}

void ble_rsp_hardware_io_port_config_pull(const struct ble_msg_hardware_io_port_config_pull_rsp_t *msg) {
	printf("===================ble_rsp_hardware_io_port_config_pull Not Defined======================\n");

}

void ble_rsp_hardware_io_port_config_function(const struct ble_msg_hardware_io_port_config_function_rsp_t *msg) {
	printf("===================ble_rsp_hardware_io_port_config_function Not Defined======================\n");

}

void ble_rsp_gap_set_privacy_flags(const void *nul) {
	printf("===================ble_rsp_gap_set_privacy_flags Not Defined======================\n");

}

void ble_rsp_gap_connect_selective(const struct ble_msg_gap_connect_selective_rsp_t *msg) {
	printf("===================ble_rsp_gap_connect_selective Not Defined======================\n");

}

void ble_rsp_system_whitelist_remove(const struct ble_msg_system_whitelist_remove_rsp_t *msg) {
	printf("===================ble_rsp_system_whitelist_remove Not Defined======================\n");

}

void ble_rsp_system_reset(const void* nul) {
	printf("[<] ble_rsp_system_reset done\n");
	clearFlag(app_state, APP_COMMAND_PENDING);
}

void ble_rsp_system_hello(const void* nul) {
	printf("===================ble_rsp_system_hello Not Defined======================\n");
}

void ble_rsp_system_address_get(const struct ble_msg_system_address_get_rsp_t *msg) {
	printf("===================ble_rsp_system_address_get Not Defined======================\n");
}

void ble_rsp_system_reg_write(const struct ble_msg_system_reg_write_rsp_t *msg) {
	printf("===================ble_rsp_system_reg_write Not Defined======================\n");
}

void ble_rsp_system_reg_read(const struct ble_msg_system_reg_read_rsp_t *msg) {
	printf("===================ble_rsp_system_reg_read Not Defined======================\n");
}

void ble_rsp_system_get_counters(const struct ble_msg_system_get_counters_rsp_t *msg) {
	printf("===================ble_rsp_system_get_counters Not Defined======================\n");
}

void ble_rsp_system_get_connections(const struct ble_msg_system_get_connections_rsp_t *msg) {
	printf("[<] ble_rsp_system_endpoint_tx result: %d\n", msg->maxconn);
	clearFlag(app_state, APP_COMMAND_PENDING);
}

void ble_rsp_system_read_memory(const struct ble_msg_system_read_memory_rsp_t *msg) {
	printf("===================ble_rsp_system_read_memory Not Defined======================\n");
}

void ble_rsp_system_get_info(const struct ble_msg_system_get_info_rsp_t *msg) {
	printf("===================ble_rsp_system_get_info Not Defined======================\n");
}

void ble_rsp_system_endpoint_tx(const struct ble_msg_system_endpoint_tx_rsp_t *msg) {
	printf("[<] ble_rsp_system_endpoint_tx result: %d\n", msg->result);
	clearFlag(app_state, APP_COMMAND_PENDING);
}

void ble_rsp_flash_ps_defrag(const void* nul) {
	printf("===================ble_rsp_flash_ps_defrag Not Defined======================\n");
}

void ble_rsp_flash_ps_dump(const void* nul) {
	printf("===================ble_rsp_flash_ps_dump Not Defined======================\n");
}

void ble_rsp_flash_ps_erase_all(const void* nul) {
	printf("===================ble_rsp_flash_ps_erase_all Not Defined======================\n");
}

void ble_rsp_flash_ps_save(const struct ble_msg_flash_ps_save_rsp_t *msg) {
	printf("===================ble_rsp_flash_ps_save Not Defined======================\n");
}

void ble_rsp_flash_ps_load(const struct ble_msg_flash_ps_load_rsp_t *msg) {
	printf("===================ble_rsp_flash_ps_load Not Defined======================\n");
}

void ble_rsp_flash_ps_erase(const void* nul) {
	printf("===================ble_rsp_flash_ps_erase Not Defined======================\n");
}

void ble_rsp_flash_erase_page(const struct ble_msg_flash_erase_page_rsp_t *msg) {
	printf("===================ble_rsp_flash_erase_page Not Defined======================\n");
}

void ble_rsp_flash_write_words(const void* nul) {
	printf("===================ble_rsp_flash_write_words Not Defined======================\n");
}

void ble_rsp_attributes_write(const struct ble_msg_attributes_write_rsp_t *msg) {
	printf("===================ble_rsp_attributes_write Not Defined======================\n");
}

void ble_rsp_attributes_read(const struct ble_msg_attributes_read_rsp_t *msg) {
    printf("[<] ble_rsp_attributes_read handle:%d, offset:%d\n", msg->handle, msg->offset);
	printf("value :");
	for (int index = 0; index < msg->value.len; index++)
	{
		printf(" %d", msg->value.data[index]);
	}
	printf("\n");
    if (msg->result != 0) {
        setFlag(app_state, APP_COMMAND_ERROR);
    }
    clearFlag(app_state, APP_COMMAND_PENDING);
}

void ble_rsp_attributes_read_type(const struct ble_msg_attributes_read_type_rsp_t *msg) {
	printf("===================ble_rsp_attributes_read_type Not Defined======================\n");
}

void ble_rsp_connection_disconnect(const struct ble_msg_connection_disconnect_rsp_t *msg) {
    printf("[<] ble_rsp_connection_disconnect\n");
    if (msg->result != 0) {
        setFlag(app_state, APP_COMMAND_ERROR);
    }
    clearFlag(app_state, APP_COMMAND_PENDING);
}

void ble_rsp_connection_get_rssi(const struct ble_msg_connection_get_rssi_rsp_t *msg) {
	printf("===================ble_rsp_connection_get_rssi Not Defined======================\n");
}

void ble_rsp_connection_update(const struct ble_msg_connection_update_rsp_t *msg) {
	printf("===================ble_rsp_connection_update Not Defined======================\n");
}

void ble_rsp_connection_version_update(const struct ble_msg_connection_version_update_rsp_t *msg) {
	printf("===================ble_rsp_connection_version_update Not Defined======================\n");
}

void ble_rsp_connection_channel_map_get(const struct ble_msg_connection_channel_map_get_rsp_t *msg) {
	printf("===================ble_rsp_connection_channel_map_get Not Defined======================\n");
}

void ble_rsp_connection_channel_map_set(const struct ble_msg_connection_channel_map_set_rsp_t *msg) {
	printf("===================ble_rsp_connection_channel_map_set Not Defined======================\n");
}

void ble_rsp_connection_features_get(const struct ble_msg_connection_features_get_rsp_t *msg) {
	printf("===================ble_rsp_connection_features_get Not Defined======================\n");
}

void ble_rsp_connection_get_status(const struct ble_msg_connection_get_status_rsp_t *msg) {
    printf("[<] ble_rsp_connection_get_status, connection: %d\n", msg->connection);
    clearFlag(app_state, APP_COMMAND_PENDING);
}

void ble_rsp_connection_raw_tx(const struct ble_msg_connection_raw_tx_rsp_t *msg) {
	printf("[<] ble_rsp_connection_get_status, connection: %d\n", msg->connection);
	clearFlag(app_state, APP_COMMAND_PENDING);
}

void ble_rsp_attclient_find_by_type_value(const struct ble_msg_attclient_find_by_type_value_rsp_t *msg) {
    printf("[<] ble_rsp_attclient_find_by_type_value, connection: %d\n", msg->connection);
    if (msg->result != 0) {
        setFlag(app_state, APP_COMMAND_ERROR);
    }
    clearFlag(app_state, APP_COMMAND_PENDING);
}

void ble_rsp_attclient_read_by_group_type(const struct ble_msg_attclient_read_by_group_type_rsp_t *msg) {
    printf("[<] ble_rsp_attclient_read_by_group_type, connection: %d\n", msg->connection);
    if (msg->result != 0) {
        setFlag(app_state, APP_COMMAND_ERROR);
    }
    clearFlag(app_state, APP_COMMAND_PENDING);
}

void ble_rsp_attclient_read_by_type(const struct ble_msg_attclient_read_by_type_rsp_t *msg) {
    printf("[<] ble_rsp_attclient_read_by_type, result: 0x%04X\n", msg->result);
    if (msg->result != 0) {
        setFlag(app_state, APP_COMMAND_ERROR);
    }
    clearFlag(app_state, APP_COMMAND_PENDING);
}

void ble_rsp_attclient_find_information(const struct ble_msg_attclient_find_information_rsp_t *msg) {
    printf("[<] ble_rsp_attclient_find_information, result: 0x%04X\n", msg->result);
    if (msg->result != 0) {
        setFlag(app_state, APP_COMMAND_ERROR);
    }
    clearFlag(app_state, APP_COMMAND_PENDING);
}

void ble_rsp_attclient_read_by_handle(const struct ble_msg_attclient_read_by_handle_rsp_t *msg) {
    printf("[<] ble_rsp_attclient_read_by_handle, result: 0x%04X\n", msg->result);
    if (msg->result != 0) {
        setFlag(app_state, APP_COMMAND_ERROR);
    }
    clearFlag(app_state, APP_COMMAND_PENDING);
}

void ble_rsp_attclient_attribute_write(const struct ble_msg_attclient_attribute_write_rsp_t *msg) {
    printf("[<] ble_rsp_attclient_attribute_write, result: %d\n", msg->result);
    if (msg->result != 0) {
        setFlag(app_state, APP_COMMAND_ERROR);
    }
    clearFlag(app_state, APP_COMMAND_PENDING);
}

void ble_rsp_sm_encrypt_start(const struct ble_msg_sm_encrypt_start_rsp_t *msg) {
	printf("===================ble_rsp_sm_encrypt_start Not Defined======================\n");
}

void ble_rsp_sm_set_bondable_mode(const void* nul) {
	printf("===================ble_rsp_sm_set_bondable_mode Not Defined======================\n");
}

void ble_rsp_sm_delete_bonding(const struct ble_msg_sm_delete_bonding_rsp_t *msg) {
	printf("===================ble_rsp_sm_delete_bonding Not Defined======================\n");
}

void ble_rsp_gap_set_address_mode(const void* nul) {
	printf("===================ble_rsp_gap_set_address_mode Not Defined======================\n");
}

void ble_rsp_gap_set_mode(const struct ble_msg_gap_set_mode_rsp_t *msg) {
	printf("===================ble_rsp_gap_set_mode Not Defined======================\n");
}

void ble_rsp_gap_discover(const struct ble_msg_gap_discover_rsp_t *msg) {
    printf("[<] ble_rsp_gap_discover\n");
    if (msg->result != 0) {
        setFlag(app_state, APP_COMMAND_ERROR);
    }
    clearFlag(app_state, APP_COMMAND_PENDING);
}

void ble_rsp_gap_connect_direct(const struct ble_msg_gap_connect_direct_rsp_t *msg) {
    printf("[<] ble_rsp_gap_connect_direct, result: %d\n", msg->result);
	printf("[<] ble_rsp_gap_connect_direct, handle: %d\n", msg->connection_handle);
	app_connection.handle = msg->connection_handle;
    if (msg->result != 0) {
        setFlag(app_state, APP_COMMAND_ERROR);
    }
    clearFlag(app_state, APP_COMMAND_PENDING);
}

void ble_rsp_gap_end_procedure(const struct ble_msg_gap_end_procedure_rsp_t *msg) {
    printf("[<] ble_rsp_gap_end_procedure, result: 0x%04X\n", msg->result);
    if (msg->result != 0) {
        setFlag(app_state, APP_COMMAND_ERROR);
    }
    clearFlag(app_state, APP_COMMAND_PENDING);
}

void ble_rsp_hardware_io_port_config_irq(const struct ble_msg_hardware_io_port_config_irq_rsp_t *msg) {
	printf("===================ble_rsp_hardware_io_port_config_irq Not Defined======================\n");
}

void ble_rsp_hardware_set_soft_timer(const struct ble_msg_hardware_set_soft_timer_rsp_t *msg) {
	printf("===================ble_rsp_hardware_set_soft_timer Not Defined======================\n");
}

void ble_rsp_hardware_adc_read(const struct ble_msg_hardware_adc_read_rsp_t *msg) {
	printf("===================ble_rsp_hardware_adc_read Not Defined======================\n");
}

void ble_rsp_test_phy_tx(const void* nul) {
	printf("===================ble_rsp_test_phy_tx Not Defined======================\n");
}

void ble_rsp_test_phy_rx(const void* nul) {
	printf("===================ble_rsp_test_phy_rx Not Defined======================\n");
}

void ble_rsp_test_phy_end(const struct ble_msg_test_phy_end_rsp_t *msg) {
	printf("===================ble_rsp_test_phy_end Not Defined======================\n");
}

void ble_rsp_test_phy_reset(const void* nul) {
	printf("===================ble_rsp_test_phy_reset Not Defined======================\n");
}

void ble_evt_system_boot(const struct ble_msg_system_boot_evt_t *msg) {
    printf("[<] ble_evt_system_boot\n");
    clearFlag(app_state, APP_COMMAND_PENDING);
}

void ble_evt_system_debug(const struct ble_msg_system_debug_evt_t *msg) {
	printf("===================ble_evt_system_debug Not Defined======================\n");
}

void ble_evt_system_endpoint_watermark_rx(const struct ble_msg_system_endpoint_watermark_rx_evt_t *msg) {
	printf("===================ble_evt_system_endpoint_watermark_rx Not Defined======================\n");
}

void ble_evt_system_endpoint_watermark_tx(const struct ble_msg_system_endpoint_watermark_tx_evt_t *msg) {
	printf("===================ble_evt_system_endpoint_watermark_tx Not Defined======================\n");
}

void ble_rsp_system_endpoint_set_watermarks(const struct ble_msg_system_endpoint_set_watermarks_rsp_t*msg) {
	printf("===================ble_rsp_system_endpoint_set_watermarks Not Defined======================\n");

}

void ble_rsp_system_endpoint_rx(const struct ble_msg_system_endpoint_rx_rsp_t*msg) {
	printf("[<] ble_rsp_system_endpoint_rx result:%d\n", msg->result);
	printf("]<} endpoint_rx :");
	for (int index = 0; index < msg->data.len; index++)
	{
		printf(" %d", msg->data.data[index]);
	}
	printf("\n");
	clearFlag(app_state, APP_COMMAND_PENDING);
}

void ble_evt_system_script_failure(const struct ble_msg_system_script_failure_evt_t *msg) {
	printf("===================ble_evt_system_script_failure Not Defined======================\n");
}

void ble_evt_flash_ps_key(const struct ble_msg_flash_ps_key_evt_t *msg) {
	printf("===================ble_evt_flash_ps_key Not Defined======================\n");
}

void ble_evt_connection_status(const struct ble_msg_connection_status_evt_t *msg) {
    printf("[<] ble_evt_connection_status\n");
    clearFlag(app_state, APP_ATTCLIENT_PENDING);

    if (msg->flags == (connection_connected | connection_completed)) {
        printf("\tConnected\n");
		app_connection.handle = msg->connection;
        app_connection.state = APP_DEVICE_CONNECTED;
    } else {
        printf("\tNot Connected: %i\n", msg->flags);
        app_connection.state = APP_DEVICE_DICONNECTED;
    }
}

void ble_evt_connection_version_ind(const struct ble_msg_connection_version_ind_evt_t *msg) {
	printf("===================ble_evt_connection_version_ind Not Defined======================\n");
}

void ble_evt_connection_feature_ind(const struct ble_msg_connection_feature_ind_evt_t *msg) {
	printf("===================ble_evt_connection_feature_ind Not Defined======================\n");
}

void ble_evt_connection_raw_rx(const struct ble_msg_connection_raw_rx_evt_t *msg) {
	printf("[<] ble_evt_connection_raw_rx connection:\n", msg->connection);
	printf("[<] ble_evt_connection_raw_rx data:");
	for (int i = 0; i < msg->data.len; i++)
	{
		printf(" %d", msg->data.data[i]);
	}
	printf("\n");
	clearFlag(app_state, APP_ATTCLIENT_PENDING);
	ble_cmd_connection_get_status(0);
}

void ble_evt_connection_disconnected(const struct ble_msg_connection_disconnected_evt_t *msg) {
    printf("[<] ble_evt_connection_disconnected\n");
    printf("[>] ble_cmd_connection_get_status\n");
	clearFlag(app_state, APP_ATTCLIENT_PENDING);
    ble_cmd_connection_get_status(0);
}

void ble_evt_attclient_indicated(const struct ble_msg_attclient_indicated_evt_t *msg) {
	printf("===================ble_evt_attclient_indicated Not Defined======================\n");
}

void ble_evt_attclient_procedure_completed(const struct ble_msg_attclient_procedure_completed_evt_t *msg) {
    printf("[<] ble_evt_attclient_procedure_completed, handle: 0x%04X, result: 0x%04X\n", msg->chrhandle, msg->result);
    if (msg->result != 0) {
        setFlag(app_state, APP_ATTCLIENT_ERROR);
    }
    printf("app_state before clear: %x\n", app_state);
    clearFlag(app_state, APP_ATTCLIENT_PENDING);
    printf("app_state after clear: %x\n", app_state);
}

void ble_evt_attclient_group_found(const struct ble_msg_attclient_group_found_evt_t *msg) {
    printf("[<] ble_evt_attclient_group_found\n");
    printf("\tStart handle: 0x%04x\n", msg->start);
    printf("\tEnd handle: 0x%04x\n", msg->end);
    printf("\tUUID (Hex): ");
    printUUID((uint8 *)msg->uuid.data, msg->uuid.len);
    printf("\n");
}

void ble_evt_attclient_attribute_found(const struct ble_msg_attclient_attribute_found_evt_t *msg) {
	printf("===================ble_evt_attclient_attribute_found Not Defined======================\n");
}

void ble_evt_attclient_find_information_found(const struct ble_msg_attclient_find_information_found_evt_t *msg) {
    printf("[<] ble_evt_attclient_find_information_found\n");
    printf("\tConn: 0x%02x\n", msg->connection);
    printf("\tCharacteristic Handle: 0x%04x\n", msg->chrhandle);
    printf("\tUUID (Hex): ");
    printUUID((uint8 *)msg->uuid.data, msg->uuid.len);
    printf("\n");
}

void ble_evt_attclient_attribute_value(const struct ble_msg_attclient_attribute_value_evt_t *msg) {
    printf("[<] ble_evt_attclient_attribute_value\n");
    printf("\tConn: 0x%02x\n", msg->connection);
    printf("\tHandle: 0x%04x\n", msg->atthandle);
    printf("\tType: 0x%02x\n", msg->type);
    printf("\tValue (Hex):\n");
    printHexdump((uint8 *)msg->value.data, msg->value.len, 10);
    printf("\n");
    memcpy(app_attclient.value.data, msg->value.data, msg->value.len * sizeof(uint8));
    app_attclient.value.len = msg->value.len;
    app_attclient.handle = msg->atthandle;
    switch (msg->type) {
        case ATTCLIENT_ATTRIBUTE_VALUE_TYPE_NOTIFY:
            setFlag(app_state, APP_ATTCLIENT_NOTIFICATION_PENDING);
            break;
        default:
            setFlag(app_state, APP_ATTCLIENT_VALUE_PENDING);
            break;
    }
}

void ble_evt_sm_smp_data(const struct ble_msg_sm_smp_data_evt_t *msg) {
	printf("===================ble_evt_sm_smp_data Not Defined======================\n");
}

void ble_evt_gap_scan_response(const struct ble_msg_gap_scan_response_evt_t *msg) {
    printf("[<] ble_evt_gap_scan_response\n");
    printf("\tScan response from: ");
    printAddr6((uint8 *)msg->sender.addr, ':');
    printf("\n");
    printf("\t%d\n", msg->rssi);
}

void ble_evt_gap_mode_changed(const struct ble_msg_gap_mode_changed_evt_t *msg) {
	printf("===================ble_evt_gap_mode_changed Not Defined======================\n");
}

void ble_evt_hardware_io_port_status(const struct ble_msg_hardware_io_port_status_evt_t *msg) {
	printf("===================ble_evt_hardware_io_port_status Not Defined======================\n");
}

void ble_evt_hardware_soft_timer(const struct ble_msg_hardware_soft_timer_evt_t *msg) {
	printf("===================ble_evt_hardware_soft_timer Not Defined======================\n");
}

void ble_evt_hardware_adc_result(const struct ble_msg_hardware_adc_result_evt_t *msg) {
	printf("===================ble_evt_hardware_adc_result Not Defined======================\n");
}

/**Reset system**/
void ble_rsp_dfu_reset(const void *nul) {
	printf("===================ble_rsp_dfu_reset Not Defined======================\n");
}

/**set address for flashing**/
void ble_rsp_dfu_flash_set_address(const struct ble_msg_dfu_flash_set_address_rsp_t *msg) {
	printf("===================ble_rsp_dfu_flash_set_address Not Defined======================\n");
}

/**Upload binary for flashing. Address will be updated automatically.**/
void ble_rsp_dfu_flash_upload(const struct ble_msg_dfu_flash_upload_rsp_t *msg) {
	printf("===================ble_rsp_dfu_flash_upload Not Defined======================\n");
}
/**Uploading is finished.**/
void ble_rsp_dfu_flash_upload_finish(const struct ble_msg_dfu_flash_upload_finish_rsp_t *msg) {
	printf("===================ble_rsp_dfu_flash_upload_finish Not Defined======================\n");
}
/**Device booted up in dfu, and is ready to receive commands**/
void ble_evt_dfu_boot(const struct ble_msg_dfu_boot_evt_t *msg) {
	printf("===================ble_evt_dfu_boot Not Defined======================\n");
}
