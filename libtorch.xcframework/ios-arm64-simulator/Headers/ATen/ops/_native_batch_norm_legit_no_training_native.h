#pragma once

// @generated by torchgen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>


namespace at {
namespace native {
TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> _batch_norm_legit_no_training(const at::Tensor & input, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, const at::Tensor & running_mean, const at::Tensor & running_var, double momentum, double eps);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> _native_batch_norm_legit_no_training_out(const at::Tensor & input, const c10::optional<at::Tensor> & weight, const c10::optional<at::Tensor> & bias, const at::Tensor & running_mean, const at::Tensor & running_var, double momentum, double eps, at::Tensor & out0, at::Tensor & out1, at::Tensor & out2);
} // namespace native
} // namespace at
