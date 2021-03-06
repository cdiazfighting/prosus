// Copyright (c) 2012-2017, The CryptoNote developers
// Copyleft (c) 2016-2018, Prosus Corp RTD
// Distributed under the MIT/X11 software license

#pragma once

#include <QFrame>

namespace Ui {
class AccountFrame;
}

namespace WalletGui {

class AccountFrame : public QFrame {
  Q_OBJECT
  Q_DISABLE_COPY(AccountFrame)

public:
  AccountFrame(QWidget* _parent);
  ~AccountFrame();

private:
  QScopedPointer<Ui::AccountFrame> m_ui;

  void updateWalletAddress(const QString& _address);
  void updateWalletBalance(quint64 _balance);
  void reset();

  Q_SLOT void copyAddress();
  Q_SLOT void showQR();
  Q_SLOT void clearLabel();

Q_SIGNALS:
  void showQRcodeSignal();

};

}
