#include "CItem.h"

CItem::CItem(void)
{
    int m_Code = 0;
    string m_Description = " ";
    double m_Price = 0.00;
    double m_DiscountRate = 0.00;
}

CItem::CItem(int code, string description)
{
    m_Code = code;
    m_Description = description;
}

void CItem::DoInitializePriceList(void)
{
}

void CItem::DoDisplayFullPriceList(void)
{
}

void CItem::DoAddItemToList(void)
{
}

void CItem::DoSetItemPrice(void)
{
}

void CItem::DoSetItemDiscountRate(void)
{
}

void CItem::DoDisplayItem(void)
{
}

void CItem::DoOrderCost(void)
{
}

void CItem::DoTotalInvoice(void)
{
}

void CItem::DoRemoveItemFromList(void)
{
}

void CItem::DoQuit(void)
{
}
