#!/bin/sh
#
#  Copyright 1999-2012 ImageMagick Studio LLC, a non-profit organization
#  dedicated to making software imaging solutions freely available.
#
#  You may not use this file except in compliance with the License.  You may
#  obtain a copy of the License at
#
#    http://www.imagemagick.org/script/license.php
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.
#
#  Test for 'validate' utility.
#
set -e # Exit on any error
. ${srcdir}/tests/common.sh

${CONVERT} pnm:- 'null:' < ${REFERENCE_IMAGE}
${CONVERT} pnm:- miff:-  < ${REFERENCE_IMAGE} | ${IDENTIFY} -
${CONVERT} pnm:- -  < ${REFERENCE_IMAGE} | ${IDENTIFY} -
${CONVERT} - 'null:' < ${REFERENCE_IMAGE}
${CONVERT} - miff:-  < ${REFERENCE_IMAGE} | ${IDENTIFY} -
${CONVERT} - -  < ${REFERENCE_IMAGE} | ${IDENTIFY} -
${CONVERT} ${REFERENCE_IMAGE} - | ${IDENTIFY} -
${CONVERT} ${REFERENCE_IMAGE} miff:- | ${IDENTIFY} -
