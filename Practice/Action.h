#pragma once

class Action {
public:
	enum Type {
		ASCEND,
		DESCEND,
		HELP,
		INVENTORY,
		EXAMINE,
		ATTACK,
		CAST,
		USE_ITEM,
		USE_ITEM_WITH_ITEM,
		USE_ITEM_WITH_INTERACTABLE,
		USE_INTERACTABLE
	};
	Action(Type type);

private:
	Type m_type;
};