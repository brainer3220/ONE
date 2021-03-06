/*
 * Copyright (c) 2020 Samsung Electronics Co., Ltd. All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __LUCI_CIRCLE_SHAPE_INFERENCE_HELPER_H__
#define __LUCI_CIRCLE_SHAPE_INFERENCE_HELPER_H__

#include <loco/IR/NodeShape.h>
#include <loco/IR/TensorShape.h>

#include <luci/IR/CircleNodes.h>

namespace luci
{

// NOTE Functions in this namespace will be removed after new inference
//      algorithms are fully implemented.

// This function is temporary function for deprecating loco::shape_get
loco::NodeShape shape_get(const loco::Node *node);

// This function is temporary function for deprecating loco::shape_known
bool shape_known(const loco::Node *node);

} // namespace luci

namespace luci
{
namespace sinf // Namespace for Shape Inference
{

// Return shape of circle node as loco::TensorShape
loco::TensorShape circle_shape(const luci::CircleNode *node);

} // namespace sinf
} // namespace luci

#endif // __LUCI_CIRCLE_SHAPE_INFERENCE_HELPER_H__
