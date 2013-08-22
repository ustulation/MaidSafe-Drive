/* Copyright 2011 MaidSafe.net limited

This MaidSafe Software is licensed under the MaidSafe.net Commercial License, version 1.0 or later,
and The General Public License (GPL), version 3. By contributing code to this project You agree to
the terms laid out in the MaidSafe Contributor Agreement, version 1.0, found in the root directory
of this project at LICENSE, COPYING and CONTRIBUTOR respectively and also available at:

http://www.novinet.com/license

Unless required by applicable law or agreed to in writing, software distributed under the License is
distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
implied. See the License for the specific language governing permissions and limitations under the
License.
*/

#include "maidsafe/drive/config.h"


namespace maidsafe {

namespace drive {

namespace detail {

#ifdef __MSVC__
const boost::filesystem::path kMsHidden(L".ms_hidden");
#else
const boost::filesystem::path kMsHidden(".ms_hidden");
#endif

const boost::filesystem::path kEmptyPath("");
const boost::filesystem::path kRoot("\\");
const boost::filesystem::path kOwner("Owner");
const boost::filesystem::path kGroup("Group");
const boost::filesystem::path kWorld("World");
const boost::filesystem::path kServices("Services");

}  // namespace detail

}  // namespace drive

}  // namespace maidsafe
