/*
 * Copyright (c) 2021-2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef BUS_CENTER_INFO_KEY_H
#define BUS_CENTER_INFO_KEY_H

#ifdef __cplusplus
extern "C" {
#endif

#define DEVICE_TYPE_BUF_LEN 17
#define NET_IF_NAME_LEN 20
#define ID_MAX_LEN 72
#define VERSION_MAX_LEN 16
#define MAC_LEN 18
#define OH_OS_TYPE 10
#define HO_OS_TYPE 11

typedef enum {
    WLAN_IF = 0,
    USB_IF = 1,
    MAX_IF = USB_IF,
    MIN_IF = WLAN_IF,
} IfnameIdx;

typedef enum {
    STRING_KEY_BEGIN = 0,
    STRING_KEY_HICE_VERSION = STRING_KEY_BEGIN,
    STRING_KEY_DEV_UDID,
    STRING_KEY_NETWORKID,
    STRING_KEY_UUID,
    STRING_KEY_DEV_TYPE,
    STRING_KEY_DEV_NAME,
    STRING_KEY_DEV_UNIFIED_NAME,
    STRING_KEY_DEV_UNIFIED_DEFAULT_NAME,
    STRING_KEY_DEV_NICK_NAME,
    STRING_KEY_BT_MAC,
    STRING_KEY_IP,
    STRING_KEY_NET_IF_NAME,
    STRING_KEY_MASTER_NODE_UDID,
    STRING_KEY_P2P_MAC,
    STRING_KEY_P2P_GO_MAC,
    STRING_KEY_WIFI_CFG,
    STRING_KEY_CHAN_LIST_5G,
    STRING_KEY_NODE_ADDR,
    STRING_KEY_OFFLINE_CODE,
    STRING_KEY_EXTDATA,
    STRING_KEY_BLE_MAC,
    STRING_KEY_WIFIDIRECT_ADDR,
    STRING_KEY_P2P_IP,
    STRING_KEY_OS_VERSION,
    STRING_KEY_SLE_ADDR,
    STRING_KEY_IP6_WITH_IF,
    STRING_KEY_END,
    NUM_KEY_BEGIN = 100,
    NUM_KEY_SESSION_PORT = NUM_KEY_BEGIN,
    NUM_KEY_AUTH_PORT,
    NUM_KEY_PROXY_PORT,
    NUM_KEY_META_NODE,
    NUM_KEY_NET_CAP, /* dynamic network capabilities, depends on the user settings */
    NUM_KEY_FEATURE_CAPA,
    NUM_KEY_DEV_TYPE_ID,
    NUM_KEY_MASTER_NODE_WEIGHT,
    NUM_KEY_P2P_ROLE,
    NUM_KEY_STA_FREQUENCY,
    NUM_KEY_DISCOVERY_TYPE,
    NUM_KEY_TRANS_PROTOCOLS,
    NUM_KEY_DATA_CHANGE_FLAG,
    NUM_KEY_DATA_DYNAMIC_LEVEL,
    NUM_KEY_DATA_STATIC_LEVEL,
    NUM_KEY_DATA_SWITCH_LEVEL,
    NUM_KEY_DATA_SWITCH_LENGTH,
    NUM_KEY_ACCOUNT_LONG,
    NUM_KEY_BLE_START_TIME,
    NUM_KEY_STATE_VERSION,
    NUM_KEY_NETWORK_ID_TIMESTAMP,
    NUM_KEY_STATIC_CAP_LEN,
    NUM_KEY_DEVICE_SECURITY_LEVEL,
    NUM_KEY_OS_TYPE,
    NUM_KEY_AUTH_CAP,
    NUM_KEY_CONN_SUB_FEATURE_CAPA,
    NUM_KEY_HB_CAP,
    NUM_KEY_USERID,
    NUM_KEY_STATIC_NET_CAP, /* static network capabilities, depends on the chip */
    NUM_KEY_SLE_RANGE_CAP,
    NUM_KEY_END,
    BOOL_KEY_BEGIN,
    BOOL_KEY_TLV_NEGOTIATION = BOOL_KEY_BEGIN,
    BOOL_KEY_SCREEN_STATUS,
    BOOL_KEY_SUPPORT_UK_NEGO,
    BOOL_KEY_END,
    BYTE_KEY_BEGIN,
    BYTE_KEY_ACCOUNT_HASH = BYTE_KEY_BEGIN,
    BYTE_KEY_IRK,
    BYTE_KEY_PUB_MAC,
    BYTE_KEY_BROADCAST_CIPHER_KEY,
    BYTE_KEY_BROADCAST_CIPHER_IV,
    BYTE_KEY_REMOTE_PTK,
    BYTE_KEY_STATIC_CAPABILITY,
    BYTE_KEY_UDID_HASH,
    BYTE_KEY_USERID_CHECKSUM,
    BYTE_KEY_END,
    INFO_KEY_MAX,
} InfoKey;

#ifdef __cplusplus
}
#endif
#endif // BUS_CENTER_INFO_KEY_H