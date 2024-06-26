/*
 * Copyright (c) 2022, Linus Groh <linusg@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <AK/Variant.h>
#include <LibJS/Forward.h>
#include <LibJS/Heap/GCPtr.h>
#include <LibJS/SafeFunction.h>

namespace Web::Fetch::Infrastructure {

// FIXME: 'or a parallel queue'
using TaskDestination = Variant<Empty, JS::NonnullGCPtr<JS::Object>>;

void queue_fetch_task(JS::Object&, JS::SafeFunction<void()>);

}
