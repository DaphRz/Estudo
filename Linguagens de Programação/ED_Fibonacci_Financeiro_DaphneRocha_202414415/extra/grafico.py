import yfinance as yf
import matplotlib.pyplot as plt

ticker = "PETR4.SA"

df = yf.download(
    ticker,
    start="2024-01-01",
    end="2026-11-01",
    auto_adjust=True
)

plt.figure(figsize=(14, 6))
plt.plot(df.index, df["Close"], label= "Preço de Fechamento")
plt.title(f"{ticker} - Preço de Fechamento")
plt.xlabel("Data")
plt.ylabel("Preço (R$)")
plt.grid(True)
plt.legend()
plt.savefig("grafico_petr4.png", dpi=150, bbox_inches="tight")
plt.show()