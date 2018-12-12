/*
* Copyright (C) 2016-2018, L-Acoustics and its contributors

* This file is part of LA_avdecc.

* LA_avdecc is free software: you can redistribute it and/or modify
* it under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.

* LA_avdecc is distributed in the hope that it will be usefu_state,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU Lesser General Public License for more details.

* You should have received a copy of the GNU Lesser General Public License
* along with LA_avdecc.  If not, see <http://www.gnu.org/licenses/>.
*/

// Public API
// Internal API

#include <gtest/gtest.h>
#include <la/avdecc/internals/uniqueIdentifier.hpp>

TEST(UniqueIdentifier, OperatorBool)
{
	auto const nullEid = la::avdecc::UniqueIdentifier::getNullUniqueIdentifier();
	auto const uninitializedEid = la::avdecc::UniqueIdentifier::getUninitializedUniqueIdentifier();
	auto const validEid = la::avdecc::UniqueIdentifier{ 0x0000000000000001 };

	EXPECT_FALSE(nullEid);
	EXPECT_FALSE(uninitializedEid);
	EXPECT_TRUE(validEid);
}

#pragma message("TODO: Complete UniqueIdentifier unit tests")
