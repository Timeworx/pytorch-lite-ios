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



#include <ATen/ops/max_pool2d_with_indices_ops.h>

namespace at {


// aten::max_pool2d_with_indices.out(Tensor self, int[2] kernel_size, int[2] stride=[], int[2] padding=0, int[2] dilation=1, bool ceil_mode=False, *, Tensor(a!) out, Tensor(b!) indices) -> (Tensor(a!), Tensor(b!))
inline ::std::tuple<at::Tensor &,at::Tensor &> max_pool2d_with_indices_out(at::Tensor & out, at::Tensor & indices, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride={}, at::IntArrayRef padding=0, at::IntArrayRef dilation=1, bool ceil_mode=false) {
    return at::_ops::max_pool2d_with_indices_out::call(self, kernel_size, stride, padding, dilation, ceil_mode, out, indices);
}
// aten::max_pool2d_with_indices.out(Tensor self, int[2] kernel_size, int[2] stride=[], int[2] padding=0, int[2] dilation=1, bool ceil_mode=False, *, Tensor(a!) out, Tensor(b!) indices) -> (Tensor(a!), Tensor(b!))
inline ::std::tuple<at::Tensor &,at::Tensor &> max_pool2d_with_indices_outf(const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode, at::Tensor & out, at::Tensor & indices) {
    return at::_ops::max_pool2d_with_indices_out::call(self, kernel_size, stride, padding, dilation, ceil_mode, out, indices);
}

// aten::max_pool2d_with_indices(Tensor self, int[2] kernel_size, int[2] stride=[], int[2] padding=0, int[2] dilation=1, bool ceil_mode=False) -> (Tensor, Tensor)
inline ::std::tuple<at::Tensor,at::Tensor> max_pool2d_with_indices(const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride={}, at::IntArrayRef padding=0, at::IntArrayRef dilation=1, bool ceil_mode=false) {
    return at::_ops::max_pool2d_with_indices::call(self, kernel_size, stride, padding, dilation, ceil_mode);
}

}
