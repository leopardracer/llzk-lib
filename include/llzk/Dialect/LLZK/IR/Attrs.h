//===-- Attrs.h -------------------------------------------------*- C++ -*-===//
//
// Part of the LLZK Project, under the Apache License v2.0.
// See LICENSE.txt for license information.
// Copyright 2025 Veridise Inc.
// SPDX-License-Identifier: Apache-2.0
//
//===----------------------------------------------------------------------===//

#pragma once

#include <mlir/IR/Attributes.h>

// Include TableGen'd declarations
#define GET_ATTRDEF_CLASSES
#include "llzk/Dialect/LLZK/IR/Attrs.h.inc"
