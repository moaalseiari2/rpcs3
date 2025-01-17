#pragma once

#include "game_list.h"

class game_list_grid_delegate;

class game_list_grid : public game_list
{
	Q_OBJECT

	QSize m_icon_size;
	QColor m_icon_color;
	qreal m_margin_factor;
	qreal m_text_factor;
	bool m_text_enabled = true;

public:
	explicit game_list_grid(const QSize& icon_size, QColor icon_color, const qreal& margin_factor, const qreal& text_factor, const bool& showText);

	void enableText(const bool& enabled);
	void setIconSize(const QSize& size) const;
	void addItem(const QPixmap& img, const QString& name, const int& row, const int& col);

	qreal getMarginFactor() const;

private:
	game_list_grid_delegate* grid_item_delegate; 
};
