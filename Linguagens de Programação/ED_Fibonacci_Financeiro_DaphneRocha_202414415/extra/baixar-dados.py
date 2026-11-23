import yfinance as yf

df = yf.download (
    "PETR4.SA",
    start="2015-01-01",
    end="2026-11-01",
    auto_adjust=True
)

print(df.tail())

df.to_csv("PETR4.csv")