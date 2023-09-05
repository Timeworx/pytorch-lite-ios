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
TORCH_API at::Tensor cholesky_solve(const at::Tensor & self, const at::Tensor & input2, bool upper=false);
TORCH_API at::Tensor & cholesky_solve_out(const at::Tensor & self, const at::Tensor & input2, bool upper, at::Tensor & out);
} // namespace native
} // namespace at
