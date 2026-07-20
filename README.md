# Nội dung vấn đáp giữa kỳ môn học kiến trúc phần mềm

Jul 11, 2026 • Ngô Huy Biên • Software Architecture

_Nội dung vấn đáp giữa kỳ môn học kiến trúc phần mềm._

## 1. Các đặc tính chất lượng (Quality Attributes):

Demo và giải thích (việc giải thích không giới hạn ở 2 đặc tính chất lượng này):

- Scalability bằng cách chạy k6, locust, hoặc JMeter trên một open source tự chọn, giải thích các kết quả thu được, và
- Security bằng cách dùng công cụ online quét, hay dùng Claude Code/Codex/GitHub Copilit để audit một open source tự chọn, và giải thích các kết quả thu được.

Common Quality Attribute: 
- Performance (latency, throughtput)
- Modifiability
- Availability
- Reliability
- Security
- Scalability
- Usability
- Testability
- Interoperability
- Maintainability
- Portability

Quality Attribute Scenario
6 phần chuẩn:
- **Source of stimulus** – nguồn tạo kích thích
- **Stimulus** – sự kiện/kích thích xảy ra
- **Environment** – trạng thái hệ thống khi xảy ra
- **Artifact** – thành phần bị tác động
- **Response** – hệ thống phản ứng thế nào
- **Response measure** – đo lường phản ứng

Trade-off between Quality Attributes:
- performance vs security
- modifiability vs performance
- availability vs consistency
- scalability vs simplicity

## 2. Biểu diễn kiến trúc (Architecture Representation):

- Demo việc tái tạo và giải thích kiến trúc của: [Claude Code auto mode](https://www.anthropic.com/engineering/claude-code-auto-mode)
- Các bạn có thể chọn UML + Views, hoặc Boxes and Arrows + Views, hoặc Boxes and Arrows + C4 Models. Việc biểu diễn kiến trúc luôn cần đi kèm giải thích các thành phần trong sơ đồ bằng chữ.
- Có phải chỉ cần Package, Component, Deployment, Artifact là đủ? Đây là 4 mô hình của UML thường dùng để thể hiện kiến trúc, nhưng không có nghĩa là đủ, và cũng không đồng nghĩa với 4 views. View thể hiện một mối quan tâm, UML Model là một sơ đồ áp dụng các ký hiệu và quy tắc của UML.
- Số lượng các views: Không giới hạn, khi nào mã nguồn có thể bắt đầu được tạo, và ban quản lý không có yêu cầu thêm là được. Thông thường, tối thiểu sẽ có: 4+1 Views và Database Schema. Một số trường hợp có thể có thêm Security View, Concurrency View, tùy thuộc vào Quality Attributes đang được ban quản lý và nhóm phát triển quan tâm.

### 3. Microservice Architecture, Containers (Docker), Container Orchestration (Kubernetes), và Service Mesh (Istio):

Chạy repo book info vì có sẵn service mesh; cài thêm istio
Link tải: https://github.com/istio/istio/releases/download/1.30.3/istio-1.30.3-win.zip 
Tải về giải nén ra và vào thư mục samples, có repo BookInfo trong đó

- Demo và giải thích kiến trúc Microservices bằng một trong các hệ thống đã được học.
- Demo và giải thích kiến trúc Microservices với các công cụ hỗ trợ: Docker, Kubernetes, Istio, Prometheus, và Grafana.
- Các bạn có thể chọn demo bằng các công cụ khác có các tính năng tương tự Docker, Kubernetes, Istio, Prometheus, và Grafana.

- Kiến trúc chặn sercurity
- Sao biết microservice độc lập hơn monolith, muốn biết số lượng thì đếm
	- Component độc lập: deploy, techstack, process riêng, team riêng,....
	- Monolith FE, BE, DB vẫn độc lập, nhưng lúc deploy thì k độc lập
- Tại sao chuyển qua microservice thay vì mono
	- maintain
	- avai
	- performance
	- Scale thế nào
	- Theo dõi chạy thế nào
- Về nhà dùng cloud load test
- Kím tool scan sercurity (online hoặc local) và thực hành
- Đánh giá kiến trúc
	- Định lượng: đếm lỗi bảo mật, request fail,....
	- Định tính: bằng con người, nhìn vào kiến trúc chạy thử kịch bản

- Kích hoạt k8s và tạo pod để các db giao tiếp nhau
- Output file yml và command đã dùng cho tôi để hiểu trình tự làm khi hoàn thành service;
- Chạy toàn bộ service bằng k8s

- Định nghĩa service mesh = control plane + data plane(side car)?
- Nên chạy repo book infor vì có sẵn service mesh; cài thêm istio

- Chạy các service repo book info và hiển thị dashboard có các side car chặn lại
- Prometheus cài để ghi lại truy cập side car, truy cập ui vài lần để ghi lại thông tin req rồi show ra
