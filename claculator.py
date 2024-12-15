import flet as ft
def main(page: ft.Page):
    page.title = "Grafik Kalkulyator"
    page.horizontal_alignment = ft.CrossAxisAlignment.CENTER
    page.vertical_alignment = ft.MainAxisAlignment.CENTER
    page.window_width = 350
    page.window_height = 600
    # Ekran uchun matn o'zgaruvchisi
    input_field = ft.TextField(
        width=300,
        text_align=ft.TextAlign.RIGHT,
        value="",
        read_only=True,
        border_width=2,
        border_color=ft.colors.BLUE,
        text_size=24,
    )
    def button_click(e):
        # Tugma bosilganda
        if e.control.text == "C":
            input_field.value = ""
        elif e.control.text == "=":
            try:
                input_field.value = str(eval(input_field.value))
            except Exception:
                input_field.value = "Xato!"
        elif e.control.text == "√":
            try:
                input_field.value = str(float(input_field.value) ** 0.5)
            except ValueError:
                input_field.value = "Xato!"
        elif e.control.text == "x²":
            try:
                input_field.value = str(float(input_field.value) ** 2)
            except ValueError:
                input_field.value = "Xato!"
        else:
            input_field.value += e.control.text
        page.update()
    # Tugmalarni yaratish
    buttons = [
        "7", "8", "9", "/",
        "4", "5", "6", "*",
        "1", "2", "3", "-",
        "C", "0", "=", "+",
        "√", "x²", ".", "%"
    ]
    grid = ft.GridView(
        expand=1,
        max_extent=75,
        child_aspect_ratio=1,
        spacing=10,
        run_spacing=10,
        padding=20,
    )
    for btn_text in buttons:
        grid.controls.append(
            ft.ElevatedButton(
                text=btn_text,
                on_click=button_click,
                width=70,
                height=70,
                style=ft.ButtonStyle(
                    bgcolor=ft.colors.LIGHT_BLUE_300,
                    color=ft.colors.BLACK,
                    shape=ft.RoundedRectangleBorder(radius=10),
                ),
            )
        )
    # Sahifaga qo'shish
    page.add(
        ft.Column(
            [input_field, grid],
            alignment=ft.MainAxisAlignment.CENTER,
            horizontal_alignment=ft.CrossAxisAlignment.CENTER,
        )
    )
# Flet dasturni ishga tushirish
if __name__ == "__main__":
    ft.app(target=main)