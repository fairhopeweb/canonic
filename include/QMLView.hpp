#pragma once

#include "View.hpp"

class QMLView : public View
{
  public:
    explicit QMLView();

    /**
     * Returns the name that is displayed in the view selector.
     **/
    QString getDisplayName() const override;

    /**
     * Returns the icon that is displayed in the view selector.
     **/
    QUrl getIconSource() const override;

    /**
     * Generates a QML source string based on the provided QByteArray data.
     **/
    const QByteArray &process(const QByteArray &data) override;
};
