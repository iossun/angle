// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// entry_points_gl_4_4_autogen.cpp:
//   Defines the GL 4.4 entry points.

#include "libGL/entry_points_gl_4_4_autogen.h"

#include "libANGLE/Context.h"
#include "libANGLE/Context.inl.h"
#include "libANGLE/entry_points_utils.h"
#include "libANGLE/gl_enum_utils.h"
#include "libANGLE/validationEGL.h"
#include "libANGLE/validationES.h"
#include "libANGLE/validationES1.h"
#include "libANGLE/validationES2.h"
#include "libANGLE/validationES3.h"
#include "libANGLE/validationES31.h"
#include "libANGLE/validationES32.h"
#include "libANGLE/validationESEXT.h"
#include "libANGLE/validationGL44_autogen.h"
#include "libGLESv2/global_state.h"

namespace gl
{
void GL_APIENTRY BindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint *buffers)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::BindBuffersBase, "glBindBuffersBase",
          "context = %d, target = %s, first = %u, count = %d, buffers = 0x%016" PRIxPTR "",
          CID(context), GLenumToString(GLenumGroup::BufferTargetARB, target), first, count,
          (uintptr_t)buffers);

    if (context)
    {
        const BufferID *buffersPacked                         = FromGL<const BufferID *>(buffers);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid                                      = (context->skipValidation() ||
                            ValidateBindBuffersBase(context, target, first, count, buffersPacked));
        if (isCallValid)
        {
            context->bindBuffersBase(target, first, count, buffersPacked);
        }
        ANGLE_CAPTURE(BindBuffersBase, isCallValid, context, target, first, count, buffersPacked);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY BindBuffersRange(GLenum target,
                                  GLuint first,
                                  GLsizei count,
                                  const GLuint *buffers,
                                  const GLintptr *offsets,
                                  const GLsizeiptr *sizes)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::BindBuffersRange, "glBindBuffersRange",
          "context = %d, target = %s, first = %u, count = %d, buffers = 0x%016" PRIxPTR
          ", offsets = 0x%016" PRIxPTR ", sizes = 0x%016" PRIxPTR "",
          CID(context), GLenumToString(GLenumGroup::BufferTargetARB, target), first, count,
          (uintptr_t)buffers, (uintptr_t)offsets, (uintptr_t)sizes);

    if (context)
    {
        const BufferID *buffersPacked                         = FromGL<const BufferID *>(buffers);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() || ValidateBindBuffersRange(context, target, first, count,
                                                                   buffersPacked, offsets, sizes));
        if (isCallValid)
        {
            context->bindBuffersRange(target, first, count, buffersPacked, offsets, sizes);
        }
        ANGLE_CAPTURE(BindBuffersRange, isCallValid, context, target, first, count, buffersPacked,
                      offsets, sizes);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY BindImageTextures(GLuint first, GLsizei count, const GLuint *textures)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::BindImageTextures, "glBindImageTextures",
          "context = %d, first = %u, count = %d, textures = 0x%016" PRIxPTR "", CID(context), first,
          count, (uintptr_t)textures);

    if (context)
    {
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid                                      = (context->skipValidation() ||
                            ValidateBindImageTextures(context, first, count, textures));
        if (isCallValid)
        {
            context->bindImageTextures(first, count, textures);
        }
        ANGLE_CAPTURE(BindImageTextures, isCallValid, context, first, count, textures);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY BindSamplers(GLuint first, GLsizei count, const GLuint *samplers)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::BindSamplers, "glBindSamplers",
          "context = %d, first = %u, count = %d, samplers = 0x%016" PRIxPTR "", CID(context), first,
          count, (uintptr_t)samplers);

    if (context)
    {
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() || ValidateBindSamplers(context, first, count, samplers));
        if (isCallValid)
        {
            context->bindSamplers(first, count, samplers);
        }
        ANGLE_CAPTURE(BindSamplers, isCallValid, context, first, count, samplers);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY BindTextures(GLuint first, GLsizei count, const GLuint *textures)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::BindTextures, "glBindTextures",
          "context = %d, first = %u, count = %d, textures = 0x%016" PRIxPTR "", CID(context), first,
          count, (uintptr_t)textures);

    if (context)
    {
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() || ValidateBindTextures(context, first, count, textures));
        if (isCallValid)
        {
            context->bindTextures(first, count, textures);
        }
        ANGLE_CAPTURE(BindTextures, isCallValid, context, first, count, textures);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY BindVertexBuffers(GLuint first,
                                   GLsizei count,
                                   const GLuint *buffers,
                                   const GLintptr *offsets,
                                   const GLsizei *strides)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::BindVertexBuffers, "glBindVertexBuffers",
          "context = %d, first = %u, count = %d, buffers = 0x%016" PRIxPTR
          ", offsets = 0x%016" PRIxPTR ", strides = 0x%016" PRIxPTR "",
          CID(context), first, count, (uintptr_t)buffers, (uintptr_t)offsets, (uintptr_t)strides);

    if (context)
    {
        const BufferID *buffersPacked                         = FromGL<const BufferID *>(buffers);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() ||
             ValidateBindVertexBuffers(context, first, count, buffersPacked, offsets, strides));
        if (isCallValid)
        {
            context->bindVertexBuffers(first, count, buffersPacked, offsets, strides);
        }
        ANGLE_CAPTURE(BindVertexBuffers, isCallValid, context, first, count, buffersPacked, offsets,
                      strides);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY BufferStorage(GLenum target, GLsizeiptr size, const void *data, GLbitfield flags)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::BufferStorage, "glBufferStorage",
          "context = %d, target = %s, size = %llu, data = 0x%016" PRIxPTR ", flags = %s",
          CID(context), GLenumToString(GLenumGroup::BufferStorageTarget, target),
          static_cast<unsigned long long>(size), (uintptr_t)data,
          GLbitfieldToString(GLenumGroup::MapBufferUsageMask, flags).c_str());

    if (context)
    {
        BufferBinding targetPacked                            = FromGL<BufferBinding>(target);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid                                      = (context->skipValidation() ||
                            ValidateBufferStorage(context, targetPacked, size, data, flags));
        if (isCallValid)
        {
            context->bufferStorage(targetPacked, size, data, flags);
        }
        ANGLE_CAPTURE(BufferStorage, isCallValid, context, targetPacked, size, data, flags);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY
ClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void *data)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::ClearTexImage, "glClearTexImage",
          "context = %d, texture = %u, level = %d, format = %s, type = %s, data = 0x%016" PRIxPTR
          "",
          CID(context), texture, level, GLenumToString(GLenumGroup::PixelFormat, format),
          GLenumToString(GLenumGroup::PixelType, type), (uintptr_t)data);

    if (context)
    {
        TextureID texturePacked                               = FromGL<TextureID>(texture);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() ||
             ValidateClearTexImage(context, texturePacked, level, format, type, data));
        if (isCallValid)
        {
            context->clearTexImage(texturePacked, level, format, type, data);
        }
        ANGLE_CAPTURE(ClearTexImage, isCallValid, context, texturePacked, level, format, type,
                      data);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}

void GL_APIENTRY ClearTexSubImage(GLuint texture,
                                  GLint level,
                                  GLint xoffset,
                                  GLint yoffset,
                                  GLint zoffset,
                                  GLsizei width,
                                  GLsizei height,
                                  GLsizei depth,
                                  GLenum format,
                                  GLenum type,
                                  const void *data)
{
    Context *context = GetValidGlobalContext();
    EVENT(context, gl::EntryPoint::ClearTexSubImage, "glClearTexSubImage",
          "context = %d, texture = %u, level = %d, xoffset = %d, yoffset = %d, zoffset = %d, width "
          "= %d, height = %d, depth = %d, format = %s, type = %s, data = 0x%016" PRIxPTR "",
          CID(context), texture, level, xoffset, yoffset, zoffset, width, height, depth,
          GLenumToString(GLenumGroup::PixelFormat, format),
          GLenumToString(GLenumGroup::PixelType, type), (uintptr_t)data);

    if (context)
    {
        TextureID texturePacked                               = FromGL<TextureID>(texture);
        std::unique_lock<angle::GlobalMutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid =
            (context->skipValidation() ||
             ValidateClearTexSubImage(context, texturePacked, level, xoffset, yoffset, zoffset,
                                      width, height, depth, format, type, data));
        if (isCallValid)
        {
            context->clearTexSubImage(texturePacked, level, xoffset, yoffset, zoffset, width,
                                      height, depth, format, type, data);
        }
        ANGLE_CAPTURE(ClearTexSubImage, isCallValid, context, texturePacked, level, xoffset,
                      yoffset, zoffset, width, height, depth, format, type, data);
    }
    else
    {
        GenerateContextLostErrorOnCurrentGlobalContext();
    }
}
}  // namespace gl
