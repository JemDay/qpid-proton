#ifndef PROTON_CPP_DURATION_H
#define PROTON_CPP_DURATION_H

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

#include "proton/export.hpp"
#include "proton/types.hpp"

namespace proton {

/** @ingroup cpp
 * A duration is a time in milliseconds.
 */
class Duration : public Comparable<Duration>
{
  public:
    std::uint64_t milliseconds;
    explicit Duration(std::uint64_t ms) : milliseconds(ms) {}

    bool operator<(Duration d) { return milliseconds < d.milliseconds; }
    bool operator==(Duration d) { return milliseconds == d.milliseconds; }

    PN_CPP_EXTERN static const Duration FOREVER;
    PN_CPP_EXTERN static const Duration IMMEDIATE;
    PN_CPP_EXTERN static const Duration SECOND;
    PN_CPP_EXTERN static const Duration MINUTE;
};

inline Duration operator*(Duration d, std::uint64_t n) { return Duration(d.milliseconds*n); }
inline Duration operator*(std::uint64_t n, Duration d) { return d * n; }

inline Timestamp operator+(Timestamp ts, Duration d) { return Timestamp(ts.milliseconds+d.milliseconds); }
inline Timestamp operator+(Duration d, Timestamp ts) { return ts + d; }
}

#endif  /*!PROTON_CPP_DURATION_H*/