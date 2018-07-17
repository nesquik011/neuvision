#include "zbinarypatterndecoder.h"

#include <QString>
#include <QtTest>

class BinaryPatternTests : public QObject
{
    Q_OBJECT

public:
    BinaryPatternTests();

private Q_SLOTS:
    void tst_decodeGrayCode_data();
    void tst_decodeGrayCode();
};

BinaryPatternTests::BinaryPatternTests()
{
}

void BinaryPatternTests::tst_decodeGrayCode_data()
{
    QTest::addColumn<QString>("data");
    QTest::newRow("0") << QString();
}

void BinaryPatternTests::tst_decodeGrayCode()
{
    const std::vector<cv::Mat> images;
    const std::vector<cv::Mat> invImages;
    const cv::Mat maskImg;
    const bool isGrayCode = true;

    //cv::Mat decodedPattern = Z3D::ZBinaryPatternDecoder::decodeBinaryPatternImages(images, invImages, maskImg, isGrayCode);

    QFETCH(QString, data);
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(BinaryPatternTests)

#include "tst_binarypatterntests.moc"
