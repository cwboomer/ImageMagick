/*
  Copyright 1999-2011 ImageMagick Studio LLC, a non-profit organization
  dedicated to making software imaging solutions freely available.
  
  You may not use this file except in compliance with the License.
  obtain a copy of the License at
  
    http://www.imagemagick.org/script/license.php
  
  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  MagickCore cache methods.
*/
#ifndef _MAGICKCORE_CACHE_H
#define _MAGICKCORE_CACHE_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

#include "MagickCore/blob.h"

extern MagickExport const Quantum
  *GetVirtualPixels(const Image *,const ssize_t,const ssize_t,const size_t,
    const size_t,ExceptionInfo *),
  *GetVirtualPixelQueue(const Image *);

extern MagickExport const void
  *AcquirePixelCachePixels(const Image *,MagickSizeType *,ExceptionInfo *),
  *GetVirtualMetacontent(const Image *);

extern MagickExport MagickBooleanType
  CacheComponentGenesis(void),
  GetOneVirtualMagickPixel(const Image *,const ssize_t,const ssize_t,
    PixelInfo *,ExceptionInfo *),
  GetOneVirtualPixel(const Image *,const ssize_t,const ssize_t,PixelPacket *,
    ExceptionInfo *),
  GetOneVirtualMethodPixel(const Image *,const VirtualPixelMethod,const ssize_t,
    const ssize_t,PixelPacket *,ExceptionInfo *),
  GetOneAuthenticPixel(Image *,const ssize_t,const ssize_t,PixelPacket *,
    ExceptionInfo *),
  PersistPixelCache(Image *,const char *,const MagickBooleanType,
    MagickOffsetType *,ExceptionInfo *),
  SyncAuthenticPixels(Image *,ExceptionInfo *),
  SyncImagePixelCache(Image *,ExceptionInfo *);

extern MagickExport MagickSizeType
  GetImageExtent(const Image *);

extern MagickExport Quantum
  *GetAuthenticPixels(Image *,const ssize_t,const ssize_t,const size_t,
    const size_t,ExceptionInfo *),
  *GetAuthenticPixelQueue(const Image *),
  *QueueAuthenticPixels(Image *,const ssize_t,const ssize_t,const size_t,
    const size_t,ExceptionInfo *);

extern MagickExport VirtualPixelMethod
  GetPixelCacheVirtualMethod(const Image *),
  SetPixelCacheVirtualMethod(const Image *,const VirtualPixelMethod);

extern MagickExport void
  CacheComponentTerminus(void),
  *GetAuthenticMetacontent(const Image *),
  *GetPixelCachePixels(Image *,MagickSizeType *,ExceptionInfo *);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
