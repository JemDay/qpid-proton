#ifndef PROTON_CPP_SETTINGS_H
#define PROTON_CPP_SETTINGS_H

/*
 *
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *
 */

#include "proton/link.h"

namespace proton {

// Source/target settings

/// Durability
enum durability_mode {
    NONE = PN_NONDURABLE,
    CONFIGURATION = PN_CONFIGURATION,
    UNSETTLED_STATE = PN_DELIVERIES
};

/// Expiry policy
enum expiry_policy {
    LINK_CLOSE = PN_EXPIRE_WITH_LINK,
    SESSION_CLOSE = PN_EXPIRE_WITH_SESSION,
    CONNECTION_CLOSE = PN_EXPIRE_WITH_CONNECTION,
    NEVER = PN_EXPIRE_NEVER
};


// Source setting

/// Distribution mode
enum distribution_mode {
    MODE_UNSPECIFIED = PN_DIST_MODE_UNSPECIFIED,
    COPY = PN_DIST_MODE_COPY,
    MOVE = PN_DIST_MODE_MOVE
};


}

#endif // PROTON_CPP_SETTINGS_H
