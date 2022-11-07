// **********************************************************************
// *                    SEGGER Microcontroller GmbH                     *
// *                        The Embedded Experts                        *
// **********************************************************************
// *                                                                    *
// *            (c) 2014 - 2021 SEGGER Microcontroller GmbH             *
// *            (c) 2001 - 2021 Rowley Associates Limited               *
// *                                                                    *
// *           www.segger.com     Support: support@segger.com           *
// *                                                                    *
// **********************************************************************
// *                                                                    *
// * All rights reserved.                                               *
// *                                                                    *
// * Redistribution and use in source and binary forms, with or         *
// * without modification, are permitted provided that the following    *
// * condition is met:                                                  *
// *                                                                    *
// * - Redistributions of source code must retain the above copyright   *
// *   notice, this condition and the following disclaimer.             *
// *                                                                    *
// * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND             *
// * CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,        *
// * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF           *
// * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE           *
// * DISCLAIMED. IN NO EVENT SHALL SEGGER Microcontroller BE LIABLE FOR *
// * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR           *
// * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT  *
// * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;    *
// * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF      *
// * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT          *
// * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE  *
// * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH   *
// * DAMAGE.                                                            *
// *                                                                    *
// **********************************************************************

// Generated automatically from the Unicode Character Database
// and Common Locale Data Repository.

#include <__crossworks.h>
#include <ctype.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
#include <limits.h>

const char __RAL_nl_NL_locale_day_names[] = 
{
  "zondag\0"
  "maandag\0"
  "dinsdag\0"
  "woensdag\0"
  "donderdag\0"
  "vrijdag\0"
  "zaterdag\0"
};

const char __RAL_nl_NL_locale_abbrev_day_names[] = 
{
  "zo\0"
  "ma\0"
  "di\0"
  "wo\0"
  "do\0"
  "vr\0"
  "za\0"
};

const char __RAL_nl_NL_locale_month_names[] = 
{
  "januari\0"
  "februari\0"
  "maart\0"
  "april\0"
  "mei\0"
  "juni\0"
  "juli\0"
  "augustus\0"
  "september\0"
  "oktober\0"
  "november\0"
  "december\0"
};

const char __RAL_nl_NL_locale_abbrev_month_names[] = 
{
  "jan.\0"
  "feb.\0"
  "mrt.\0"
  "apr.\0"
  "mei\0"
  "jun.\0"
  "jul.\0"
  "aug.\0"
  "sep.\0"
  "okt.\0"
  "nov.\0"
  "dec.\0"
};

const char __RAL_nl_NL_locale_grouping[] = "3";
const char __RAL_nl_NL_locale_int_currency_symbol[] = "EUR";
const char __RAL_nl_NL_locale_currency_symbol[] = "\342\202\254";
const char __RAL_nl_NL_locale_mon_grouping[] = "3";
const char __RAL_nl_NL_locale_time_fmt[] = "%H:%M:%S";
const char __RAL_nl_NL_locale_date_fmt[] = "%d-%m-%y";
const char __RAL_nl_NL_locale_date_time_fmt[] = "%e %B %Y %H:%M:%S %Z";
const char __RAL_nl_NL_locale_am_pm_indicator[] = "AM\0PM\0";

const __CODE __RAL_locale_data_t __RAL_nl_NL_locale = 
{
  __RAL_data_utf8_comma,   // decimal_point
  __RAL_data_utf8_period,   // thousands_sep
  __RAL_nl_NL_locale_grouping,   // grouping
  __RAL_nl_NL_locale_int_currency_symbol,   // int_currency_symbol
  __RAL_nl_NL_locale_currency_symbol,   // currency_symbol
  __RAL_data_utf8_comma,   // mon_decimal_point
  __RAL_data_utf8_period,   // mon_thousands_sep
  __RAL_nl_NL_locale_mon_grouping,   // mon_grouping
  __RAL_data_empty_string,   // positive_sign
  __RAL_data_utf8_minus,   // negative_sign
  2,	// int_frac_digits
  2,	// frac_digits
  1,	// p_cs_precedes
  1,	// p_sep_by_space
  1,	// n_cs_precedes
  1,	// n_sep_by_space
  1,	// p_sign_posn
  2,	// n_sign_posn
  1,	// int_p_cs_precedes
  1,	// int_n_cs_precedes
  1,	// int_p_sep_by_space
  1,	// int_n_sep_by_space
  1,	// int_p_sign_posn
  2,	// int_n_sign_posn
  __RAL_nl_NL_locale_day_names,
  __RAL_nl_NL_locale_abbrev_day_names,
  __RAL_nl_NL_locale_month_names,
  __RAL_nl_NL_locale_abbrev_month_names,
  __RAL_nl_NL_locale_am_pm_indicator,
  __RAL_nl_NL_locale_time_fmt,
  __RAL_nl_NL_locale_date_fmt,
  __RAL_nl_NL_locale_date_time_fmt,
};

