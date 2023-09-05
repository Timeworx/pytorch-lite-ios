#pragma once
// @generated by torchgen/gen.py from DispatchKeyFunction.h

// NB: The implementing C++ file is RegisterDispatchKey.cpp

// The only #includes we need are for custom classes that have defaults in the C++ API
#include <c10/core/MemoryFormat.h>
#include <c10/core/Scalar.h>
#include <ATen/core/Reduction.h>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {

namespace cpu {

TORCH_API at::Tensor & normal_(at::Tensor & self, double mean=0, double std=1, c10::optional<at::Generator> generator=c10::nullopt);
TORCH_API at::Tensor normal(const at::Tensor & mean, double std=1, c10::optional<at::Generator> generator=c10::nullopt);
TORCH_API at::Tensor & normal_out(at::Tensor & out, const at::Tensor & mean, double std=1, c10::optional<at::Generator> generator=c10::nullopt);
TORCH_API at::Tensor & normal_outf(const at::Tensor & mean, double std, c10::optional<at::Generator> generator, at::Tensor & out);
TORCH_API at::Tensor normal(double mean, const at::Tensor & std, c10::optional<at::Generator> generator=c10::nullopt);
TORCH_API at::Tensor & normal_out(at::Tensor & out, double mean, const at::Tensor & std, c10::optional<at::Generator> generator=c10::nullopt);
TORCH_API at::Tensor & normal_outf(double mean, const at::Tensor & std, c10::optional<at::Generator> generator, at::Tensor & out);
TORCH_API at::Tensor normal(const at::Tensor & mean, const at::Tensor & std, c10::optional<at::Generator> generator=c10::nullopt);
TORCH_API at::Tensor & normal_out(at::Tensor & out, const at::Tensor & mean, const at::Tensor & std, c10::optional<at::Generator> generator=c10::nullopt);
TORCH_API at::Tensor & normal_outf(const at::Tensor & mean, const at::Tensor & std, c10::optional<at::Generator> generator, at::Tensor & out);

} // namespace cpu
} // namespace at
