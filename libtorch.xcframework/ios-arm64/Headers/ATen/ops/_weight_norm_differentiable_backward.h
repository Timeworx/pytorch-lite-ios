#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/_weight_norm_differentiable_backward_ops.h>

namespace at {


// aten::_weight_norm_differentiable_backward(Tensor grad_w, Tensor saved_v, Tensor saved_g, Tensor saved_norms, int dim) -> (Tensor, Tensor)
inline ::std::tuple<at::Tensor,at::Tensor> _weight_norm_differentiable_backward(const at::Tensor & grad_w, const at::Tensor & saved_v, const at::Tensor & saved_g, const at::Tensor & saved_norms, int64_t dim) {
    return at::_ops::_weight_norm_differentiable_backward::call(grad_w, saved_v, saved_g, saved_norms, dim);
}

}
