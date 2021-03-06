#ifndef VIEWELEMENT_H
#define VIEWELEMENT_H
#include "VBoxElement.h"
#include "Uri.h"
namespace spider {
    class ViewElement : public VBoxElement
    {
        public:
            ViewElement();
            ViewElement(Element *parent);
            virtual ~ViewElement();
            virtual void navigate(string uri);
            virtual bool acceptsUri(string uri) {
                return false;
            }
            void pack();
        protected:
        private:
    };
}
#endif // VIEWELEMENT_H
