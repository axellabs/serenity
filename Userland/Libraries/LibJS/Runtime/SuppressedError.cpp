/*
 * Copyright (c) 2022, David Tuin <davidot@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibJS/Runtime/Error.h>
#include <LibJS/Runtime/GlobalObject.h>
#include <LibJS/Runtime/SuppressedError.h>

namespace JS {

NonnullGCPtr<SuppressedError> SuppressedError::create(Realm& realm)
{
    return realm.heap().allocate<SuppressedError>(realm, realm.intrinsics().suppressed_error_prototype()).release_allocated_value_but_fixme_should_propagate_errors();
}

SuppressedError::SuppressedError(Object& prototype)
    : Error(prototype)
{
}

}
