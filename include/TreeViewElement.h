#ifndef TREEVIEWELEMENT_H
#define TREEVIEWELEMENT_H
#include "Uri.h"
#include "Element.h"
#include "SPType.h"
#include "EventArgs.h"
#include "TreeItem.h"
namespace spider {

    class TreeViewElement : public Element {
	private:
		vector<TreeItem *> *mItems;
		int itemHeight;
	public:
		TreeViewElement(Element *parent)
            ;

		void Draw(int x, int y, GraphicsContext *g);
        vector<TreeItem *> *items() {
            return this->mItems;
        }
		void setItemHeight(int height);
		int getItemHeight();
        void addItem(TreeItem *item);
	};


}
#endif // TREEVIEWELEMENT_H
