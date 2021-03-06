/* ---------------------------------------------------------------------
 * Numenta Platform for Intelligent Computing (NuPIC)
 * Copyright (C) 2013, Numenta, Inc.  Unless you have an agreement
 * with Numenta, Inc., for a separate license for this software code, the
 * following terms and conditions apply:
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses.
 *
 * http://numenta.org/licenses/
 * ---------------------------------------------------------------------
 */

/** @file
 * Basic C++ type definitions used throughout `nupic.core` and rely on `Types.h`
 */

#ifndef NTA_TYPES_HPP
#define NTA_TYPES_HPP

#include <nta/types/Types.h>

//----------------------------------------------------------------------

namespace nta 
{
  /**
   * @name Basic types
   *
   * @{
   */

  /**
   * Represents a 8-bit byte.
   */
  typedef NTA_Byte            Byte;

  /**
   * Represents a 16-bit signed integer.
   */
  typedef NTA_Int16           Int16;

  /**
   * Represents a 16-bit unsigned integer.
   */
  typedef NTA_UInt16          UInt16;

  /**
   * Represents a 32-bit signed integer.
   */
  typedef NTA_Int32           Int32;

  /**
   * Represents a 32-bit unsigned integer.
   */
  typedef NTA_UInt32          UInt32;

  /**
   * Represents a 64-bit signed integer.
   */
  typedef NTA_Int64           Int64;

  /**
   * Represents a 64-bit unsigned integer.
   */
  typedef NTA_UInt64          UInt64;


  /**
   * Represents a 32-bit real number(a floating-point number).
   */
  typedef NTA_Real32          Real32;

  /**
   * Represents a 64-bit real number(a floating-point number).
   */
  typedef NTA_Real64          Real64;

  /**
   * Represents a opaque handle/pointer, same as `void *`
   */
  typedef NTA_Handle          Handle;

  /**
   * @}
   */

  /**
   * @name Flexible types
   * 
   * The following are flexible types depending on `NTA_DOUBLE_PROCESION` and `NTA_BIG_INTEGER`.
   *
   * @{
   * 
   */
  
  /**
   * Represents a real number(a floating-point number).
   *
   * Same as nta::Real64 if `NTA_DOUBLE_PROCESION` is defined, nta::Real32 otherwise.
   */
  typedef NTA_Real Real;

  /**
   * Represents a signed integer.
   *
   * Same as nta::Int64 if `NTA_BIG_INTEGER` is defined, nta::Int32 otherwise.
   */
  typedef NTA_Int  Int;

  /**
   * Represents a unsigned integer.
   *
   * Same as nta::UInt64 if `NTA_BIG_INTEGER` is defined, nta::UInt32 otherwise.
   */
  typedef NTA_UInt UInt;

  /**
   * Represents lengths of arrays, strings and so on.
   */
  typedef NTA_Size            Size;

  /**
   * @}
   */

  /** 
   * This enum represents the documented logging level of the debug logger. 
   * 
   * Use it like `LDEBUG(nta::LogLevel_XXX)`.
   */
  enum LogLevel
  {
    /**
     * Log level: None.
     */
    LogLevel_None = NTA_LogLevel_None,
    /**
     * Log level: Minimal.
     */
    LogLevel_Minimal,
    /**
     * Log level: Normal.
     */
    LogLevel_Normal,
    /**
     * Log level: Verbose.
     */
    LogLevel_Verbose,
  };

} // end namespace nta

#ifdef SWIG
#undef NTA_INTERNAL
#endif // SWIG

#endif // NTA_TYPES_HPP



