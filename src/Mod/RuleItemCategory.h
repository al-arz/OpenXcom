/*
 * Copyright 2010-2015 OpenXcom Developers.
 *
 * This file is part of OpenXcom.
 *
 * OpenXcom is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenXcom is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenXcom.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef OPENXCOM_RULEITEMCATEGORY_H
#define OPENXCOM_RULEITEMCATEGORY_H

#include <string>
#include <yaml-cpp/yaml.h>

namespace OpenXcom
{

class Mod;

/**
 * Represents an item category.
 * Contains info about list order.
 */
class RuleItemCategory
{
private:
	std::string _type;
	int _listOrder;
public:
	/// Creates a blank item category ruleset.
	RuleItemCategory(const std::string &type);
	/// Cleans up the item category ruleset.
	~RuleItemCategory();
	/// Loads item data from YAML.
	void load(const YAML::Node& node, Mod *mod, int listIndex);
	/// Gets the item category type.
	const std::string &getType() const;
	/// Get the list weight for this item category.
	int getListOrder() const;

};

}

#endif
