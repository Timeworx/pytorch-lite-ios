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



#include <ATen/ops/_adaptive_avg_pool3d_backward_ops.h>

namespace at {


// aten::_adaptive_avg_pool3d_backward(Tensor grad_output, Tensor self) -> Tensor
inline at::Tensor _adaptive_avg_pool3d_backward(const at::Tensor & grad_output, const at::Tensor & self) {
    return at::_ops::_adaptive_avg_pool3d_backward::call(grad_output, self);
}

// aten::_adaptive_avg_pool3d_backward.out(Tensor grad_output, Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _adaptive_avg_pool3d_backward_out(at::Tensor & out, const at::Tensor & grad_output, const at::Tensor & self) {
    return at::_ops::_adaptive_avg_pool3d_backward_out::call(grad_output, self, out);
}
// aten::_adaptive_avg_pool3d_backward.out(Tensor grad_output, Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _adaptive_avg_pool3d_backward_outf(const at::Tensor & grad_output, const at::Tensor & self, at::Tensor & out) {
    return at::_ops::_adaptive_avg_pool3d_backward_out::call(grad_output, self, out);
}

}